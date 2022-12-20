/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:20:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/20 18:01:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void	run(int num, const std::string (*f1)(double &), const std::string (*f2)(double &))
{
	std::ostringstream	ss;
	std::string			str1;
	std::string			str2;
	char				diff;
	double				time1;
	double				time2;
	double				alarm_sec;
	int					exit_status;

   	std::cout << COLOR_PURPLE_B << "| " << COLOR_END;
	std::cout << COLOR_YELLOW_B << "TEST: " << std::flush;

	time1 = 0;
	time2 = 0;
	str1 = (*f1)(time1);
	time1 /= CLOCKS_PER_SEC;
	time1 /= 1000;
	alarm_sec = ((int)time1 == 0) ? 10 : (int)(time1 * 30);

	/*--------------------- check for time and segfaults ---------------------*/
	int p = fork();
	if (p == -1)
	{
		std::cout << "fork error" << std::endl;
		exit (2);
	}
	if (p == 0)
	{
		alarm(alarm_sec);
		str2 = (*f2)(time2);
		exit(0);
	}
	else
	{
		if (wait(&exit_status) != -1 || errno != ECHILD)
			if (WIFSIGNALED(exit_status))
				WTERMSIG(exit_status);
	}
	if (exit_status == 11)
	{
		std::cout << COLOR_RED_B << "❌ KO (SEGFAULT)" << std::endl;
		std::cout << "Your grade is 0/100. Fix mistake and try again!!!";
		std::cout << std::endl << COLOR_END;
		exit (1);
	}
	else if (exit_status == 14)
	{
		std::cout << COLOR_GREEN_B << "✅ OK " << COLOR_END;
   		std::cout << COLOR_PURPLE_B << "| " << std::flush;
		std::cout << COLOR_YELLOW_B << "TIME: " << std::flush;
		std::cout << COLOR_RED_B << "❌ KO (TIMEOUT)" << std::endl;
		std::cout << "Your grade is 0/100. Fix mistake and try again!!!";
		do {
			std::cout << std::endl << COLOR_YELLOW_B;
			std::cout << "Do you want to see time difference? [y] or [n]: ";
			std::cout << COLOR_END << std::flush;
			std::cout << COLOR_PURPLE_B;
			std::cin >> diff;
			std::cout << COLOR_END;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (std::cin.eof() || std::cin.fail())
				break ;
		} while (diff != 'y' && diff != 'n');
		if (diff == 'y')
		{
			std::cout << COLOR_GREEN_B << "std -> " << std::left << std::fixed;
			std::cout << (int)(time1 * 1000000) << " ms" << std::endl;
			std::cout << COLOR_RED_B << "ft  -> too long";
			std::cout << COLOR_END << std::endl;
		}
		std::cout << COLOR_END;
		exit(1);
	}
	/* ---------------------------------------------------------------------- */
	/* ----------------------------- Main part ------------------------------ */

	str2 = (*f2)(time2);
	time2 /= CLOCKS_PER_SEC;
	time2 /= 1000;

	if (str1 == str2)
	{
		std::cout << COLOR_GREEN_B << "✅ OK " << COLOR_END;
   		std::cout << COLOR_PURPLE_B << "| " << std::flush;
	}
	else
	{
		std::cout << COLOR_RED_B << "❌ KO" << std::endl << COLOR_END;
		std::cout << COLOR_RED_B << "Your grade is 0/100. Fix mistake and try again!!!";
		std::cout << std::endl << COLOR_END;
		do
		{
			std::cout << COLOR_YELLOW_B;
			std::cout << "Do you want to see results difference? [y] or [n]: ";
			std::cout << COLOR_END << std::flush;
			std::cout << COLOR_PURPLE_B;
			std::cin >> diff;
			std::cout << COLOR_END;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (std::cin.eof() || std::cin.fail())
				break ;
		} while (diff != 'y' && diff != 'n');
		if (diff == 'y')
		{
			std::cout << COLOR_GREEN_B << "std ->" << str1 << COLOR_END << std::endl;
			std::cout << COLOR_RED_B << "ft  ->" << str2 << COLOR_END << std::endl;
		}
		ss << num;
		exit(1);
	}
	std::cout << COLOR_YELLOW_B << "TIME: " << std::flush;
//	if (((time2 / time1) <= 20) || time2 == 0 || time2 <= 0.000020)
	if (((time2 / time1) <= 20) || time2 == 0)
		std::cout << COLOR_GREEN_B << "✅ OK" << COLOR_END;
	else
	{
		std::cout << COLOR_RED_B << "❌ KO (TIMEOUT)" << std::endl << COLOR_END;
		std::cout << COLOR_RED_B << "Your grade is 0/100. Fix mistake and try again!!!";
		std::cout << std::endl << COLOR_END;
		do
		{
			std::cout << COLOR_YELLOW_B;
			std::cout << "Do you want to see time difference? [y] or [n]: ";
			std::cout << COLOR_END << std::flush;
			std::cout << COLOR_PURPLE_B;
			std::cin >> diff;
			std::cout << COLOR_END;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (std::cin.eof() || std::cin.fail())
				break ;
		} while (diff != 'y' && diff != 'n');
		if (diff == 'y')
		{
			std::cout << COLOR_GREEN_B << "std -> " << std::left << std::fixed;
			std::cout << (int)(time1 * 1000000) << " ms" << std::endl;
			std::cout << COLOR_RED_B << "ft  -> ";
			std::cout << std::left << std::fixed;
			std::cout << (int)(time2 * 1000000) << " ms" << COLOR_END << std::endl;
		}
		ss << num;
		exit(1);
	}
}
