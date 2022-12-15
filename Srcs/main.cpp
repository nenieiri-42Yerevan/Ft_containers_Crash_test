/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:20:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/15 19:06:55 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"


int	main()
{
	pid_t	fork_pid;

	run(NUM, &(F1), &(F2));

	std::cout << std::flush;
	if (LEAKS == 1)
	{
		fork_pid = fork();
		if (fork_pid == -1)
			std::cout << COLOR_RED_B << "ERROR when try to fork." << COLOR_END << std::endl;
		else if (fork_pid == 0)
		{
			pid_t	parent = getppid();
			std::ostringstream	ss;
		   
			char	command_0[] = "leaks";
			ss << parent;
			char	*command_1 = &(ss.str()[0]);
			char	command_2[] = "-nocontext";
			char	command_3[] = "-nostacks";
			char	*command[5];

			command[0] = command_0;
			command[1] = command_1;
			command[2] = command_2;
			command[3] = command_3;
			command[4] = 0;
			int fd = open("./Srcs/Tmp/leaks", O_CREAT | O_WRONLY | O_TRUNC, 0644);
			if (fd == -1)
				exit (2);
			if (dup2(fd, 1) == -1)
				exit (2);
			execvp(command_0, command);
		}
		else
			wait(NULL);
	}

	return (0);
}
