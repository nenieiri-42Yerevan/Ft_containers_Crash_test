/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:36:19 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:31:58 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 9 */
/* Example for iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	void	example9()
	{
		NS::vector<int> vec;
		NS::vector<int>::iterator	it1;
		NS::vector<int>::iterator	it2;
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		it1 = vec.begin();
		it2 = vec.begin() + 2;
		std::cout << " " << (it2 - it1);
		std::cout << " " << (it2 > it1);
		std::cout << " " << (it2 < it1);
		std::cout << " " << (it2 >= it1);
		std::cout << " " << (it2 <= it1);
		std::cout << " " << (it2 == it1);
		std::cout << " " << (it2 != it1);
		it1 = it2;
		std::cout << " " << (it2 >= it1);
		std::cout << " " << (it2 <= it1);
		std::cout << " " << (it2 == it1);
		std::cout << " " << (it2 != it1);
	}
}
