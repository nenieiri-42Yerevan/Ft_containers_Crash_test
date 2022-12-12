/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_test.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:10:37 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 13:13:54 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

/*
			std::cout << COLOR_YELLOW_B << "std ->" << str1;
			std::cout << COLOR_GREEN_B << std::endl << "ft  ->" << str2;
			std::cout << COLOR_END << std::endl;
			*/

static void	vector_run(int num, const std::string (*f1)(), const std::string (*f2)())
{
	std::ostringstream	ss;
	std::string			str1;
	std::string			str2;

	str1 = (*f1)();
	str2 = (*f2)();

	std::cout << COLOR_PURPLE_B << "Case " << std::setw(2) << num << ": " << COLOR_END;
	if (str1 == str2)
		std::cout << COLOR_GREEN_B << "OK" << COLOR_END << std::endl;
	else
	{
		std::cout << COLOR_RED_B << "KO" << COLOR_END << std::endl;
		ss << num;
		throw std::logic_error(ss.str());
	}
}

void	vector_test()
{
	std::string	str1;
	std::string	str2;

	try
	{
		vector_run(1, &(std_test::example1), &(ft_test::example1));
		vector_run(2, &(std_test::example2), &(ft_test::example2));
		vector_run(3, &(std_test::example3), &(ft_test::example3));
		vector_run(4, &(std_test::example4), &(ft_test::example4));
		vector_run(5, &(std_test::example5), &(ft_test::example5));
		vector_run(6, &(std_test::example6), &(ft_test::example6));
		vector_run(7, &(std_test::example7), &(ft_test::example7));
		vector_run(8, &(std_test::example8), &(ft_test::example8));
		vector_run(9, &(std_test::example9), &(ft_test::example9));
		vector_run(10, &(std_test::example10), &(ft_test::example10));
		vector_run(11, &(std_test::example11), &(ft_test::example11));
		vector_run(12, &(std_test::example12), &(ft_test::example12));
		vector_run(13, &(std_test::example13), &(ft_test::example13));
		vector_run(14, &(std_test::example14), &(ft_test::example14));
		vector_run(15, &(std_test::example15), &(ft_test::example15));
		vector_run(16, &(std_test::example16), &(ft_test::example16));
		vector_run(17, &(std_test::example17), &(ft_test::example17));
		vector_run(18, &(std_test::example18), &(ft_test::example18));
		vector_run(19, &(std_test::example19), &(ft_test::example19));
		vector_run(20, &(std_test::example20), &(ft_test::example20));
		vector_run(21, &(std_test::example21), &(ft_test::example21));
		vector_run(22, &(std_test::example22), &(ft_test::example22));
		vector_run(23, &(std_test::example23), &(ft_test::example23));
		vector_run(24, &(std_test::example24), &(ft_test::example24));
		vector_run(25, &(std_test::example25), &(ft_test::example25));
		vector_run(26, &(std_test::example26), &(ft_test::example26));
		vector_run(27, &(std_test::example27), &(ft_test::example27));
	}
	catch (const std::exception &e)
	{
		std::cout << e.what().stoi() << std::endl;
	}
}
