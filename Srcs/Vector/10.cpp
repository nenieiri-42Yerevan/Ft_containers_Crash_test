/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:39:20 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:31:47 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 10 */
/* Example for const iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	void	example10()
	{
		NS::vector< int> vec;
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		NS::vector<int>::const_iterator	it1 = vec.begin();
		NS::vector<int>::const_iterator	it2 = vec.begin() + 2;
		std::cout << " " << (it2 - it1);
		std::cout << " " << (it2 > it1);
		std::cout << " " << (it2 < it1);
		std::cout << " " << (it2 >= it1);
		std::cout << " " << (it2 <= it1);
		std::cout << " " << (it2 == it1);
		std::cout << " " << (it2 != it1);
		NS::vector<int>::const_iterator	it3 = vec.begin() + 2;
		NS::vector<int>::const_iterator	it4 = vec.begin() + 2;
		std::cout << " " << (it4 >= it3);
		std::cout << " " << (it4 <= it3);
		std::cout << " " << (it4 == it3);
		std::cout << " " << (it4 != it3);
	}
}
