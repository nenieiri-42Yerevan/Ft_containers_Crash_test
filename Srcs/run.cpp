/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:20:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 12:55:31 by tumolabs         ###   ########.fr       */
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

	time1 = 0;
	time2 = 0;
	std::cout << COLOR_YELLOW_B << "TIME: " << std::flush;
	str1 = (*f1)(time1);
	str2 = (*f2)(time2);
	time2 /= 20;

	if ((time2 < time1) || (time1 == 0))
	{
		std::cout << COLOR_GREEN_B << "✅ OK " << std::flush;
   		std::cout << COLOR_PURPLE_B << "| " << COLOR_END << std::flush;
	}
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
			std::cout << std::setprecision(2);
			std::cout << COLOR_GREEN_B << "std -> " << std::left << std::setw(4);
			std::cout << (time1 * 1e-6) << std::endl;
			std::cout << COLOR_RED_B << "ft  -> ";
			std::cout << std::left << std::fixed << std::setw(4);
			std::cout << (time2 * 20 * 1e-6) << COLOR_END << std::endl;
		}
		ss << num;
		exit(1);
	}
	std::cout << COLOR_YELLOW_B << "TEST: " << std::flush;
	if (str1 == str2)
		std::cout << COLOR_GREEN_B << "✅ OK" << COLOR_END;
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
}
