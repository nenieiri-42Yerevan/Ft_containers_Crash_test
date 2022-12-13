/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:20:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/13 18:54:04 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

void	run(int num, const std::string (*f1)(), const std::string (*f2)())
{
	std::ostringstream	ss;
	std::string			str1;
	std::string			str2;
	char				diff;

	str1 = (*f1)();
	str2 = (*f2)();

	std::cout << COLOR_YELLOW_B << "RETURN & OUTPUT: ";
	if (str1 == str2)
		std::cout << COLOR_GREEN_B << "✅ OK" << COLOR_END << std::endl;
	else
	{
		std::cout << COLOR_RED_B << "❌ KO" << std::endl << COLOR_END;
		std::cout << COLOR_RED_B << "Your grade is 0/100. Fix mistake and try again!!!";
		std::cout << std::endl << COLOR_END;
		do
		{
			std::cout << COLOR_YELLOW_B;
			std::cout << "Do you want to see differents? [y] or [n]: " << COLOR_END;
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
}
