/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:20:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 18:37:58 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

static void	run(int num, const std::string (*f1)(), const std::string (*f2)())
{
	std::ostringstream	ss;
	std::string			str1;
	std::string			str2;
	char				diff;

	str1 = (*f1)();
	str2 = (*f2)();

	std::cout << COLOR_PURPLE_B << "Case " << std::setw(2) << num << ": " << COLOR_END;
	std::cout << "RET&OUT: ";
	if (str1 == str2)
		std::cout << COLOR_GREEN_B << "✅ OK | TIMEOUT: " << COLOR_END << std::endl;
	else
	{
		std::cout << COLOR_RED_B << "❌ KO" << std::endl << COLOR_END;
		std::cout << COLOR_RED_B << "Your grade is 0/100. Fix mistake and try again!!!";
		std::cout << std::endl << COLOR_END;
		do
		{
			std::cout << COLOR_YELLOW_B;
			std::cout << "Do you want to see differents? [y] or [n]: " << COLOR_END;
			std::cout << COLOR_GREEN_B;
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
		throw std::logic_error(ss.str());
	}
}

int	main()
{
	std::string	str1;
	std::string	str2;

	try
	{
		run(1, &(std_test::vec_example1), &(ft_test::vec_example1));
		run(2, &(std_test::vec_example2), &(ft_test::vec_example2));
		run(3, &(std_test::vec_example3), &(ft_test::vec_example3));
		run(4, &(std_test::vec_example4), &(ft_test::vec_example4));
		run(5, &(std_test::vec_example5), &(ft_test::vec_example5));
		run(6, &(std_test::vec_example6), &(ft_test::vec_example6));
		run(7, &(std_test::vec_example7), &(ft_test::vec_example7));
		run(8, &(std_test::vec_example8), &(ft_test::vec_example8));
		run(9, &(std_test::vec_example9), &(ft_test::vec_example9));
		run(10, &(std_test::vec_example10), &(ft_test::vec_example10));
		run(11, &(std_test::vec_example11), &(ft_test::vec_example11));
		run(12, &(std_test::vec_example12), &(ft_test::vec_example12));
		run(13, &(std_test::vec_example13), &(ft_test::vec_example13));
		run(14, &(std_test::vec_example14), &(ft_test::vec_example14));
		run(15, &(std_test::vec_example15), &(ft_test::vec_example15));
		run(16, &(std_test::vec_example16), &(ft_test::vec_example16));
		run(17, &(std_test::vec_example17), &(ft_test::vec_example17));
		run(18, &(std_test::vec_example18), &(ft_test::vec_example18));
		run(19, &(std_test::vec_example19), &(ft_test::vec_example19));
		run(20, &(std_test::vec_example20), &(ft_test::vec_example20));
		run(21, &(std_test::vec_example21), &(ft_test::vec_example21));
		run(22, &(std_test::vec_example22), &(ft_test::vec_example22));
		run(23, &(std_test::vec_example23), &(ft_test::vec_example23));
		run(24, &(std_test::vec_example24), &(ft_test::vec_example24));
		run(25, &(std_test::vec_example25), &(ft_test::vec_example25));
		run(26, &(std_test::vec_example26), &(ft_test::vec_example26));
		run(27, &(std_test::vec_example27), &(ft_test::vec_example27));

		std::cout << std::endl;
		run(1, &(std_test::stack_example1), &(ft_test::stack_example1));
		run(2, &(std_test::stack_example2), &(ft_test::stack_example2));

		std::cout << std::endl;
		run(1, &(std_test::map_example1), &(ft_test::map_example1));
		run(2, &(std_test::map_example2), &(ft_test::map_example2));
		run(3, &(std_test::map_example3), &(ft_test::map_example3));
		run(4, &(std_test::map_example4), &(ft_test::map_example4));
		run(5, &(std_test::map_example5), &(ft_test::map_example5));
		run(6, &(std_test::map_example6), &(ft_test::map_example6));
		run(7, &(std_test::map_example7), &(ft_test::map_example7));
		run(8, &(std_test::map_example8), &(ft_test::map_example8));
		run(9, &(std_test::map_example9), &(ft_test::map_example9));
		run(10, &(std_test::map_example10), &(ft_test::map_example10));
		run(11, &(std_test::map_example11), &(ft_test::map_example11));
		run(12, &(std_test::map_example12), &(ft_test::map_example12));
		run(13, &(std_test::map_example13), &(ft_test::map_example13));
		run(14, &(std_test::map_example14), &(ft_test::map_example14));
		run(15, &(std_test::map_example15), &(ft_test::map_example15));
		run(16, &(std_test::map_example16), &(ft_test::map_example16));
		run(17, &(std_test::map_example17), &(ft_test::map_example17));
		run(18, &(std_test::map_example18), &(ft_test::map_example18));
		run(19, &(std_test::map_example19), &(ft_test::map_example19));
		run(20, &(std_test::map_example20), &(ft_test::map_example20));
		run(21, &(std_test::map_example21), &(ft_test::map_example21));
		run(22, &(std_test::map_example22), &(ft_test::map_example22));
	}
	catch (const std::exception &e)
	{
//		std::cout << e.what().stoi() << std::endl;
	}

	return (0);
}
