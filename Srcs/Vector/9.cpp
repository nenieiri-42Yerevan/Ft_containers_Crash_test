/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:36:19 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 17:37:39 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 9 */
/* Example for iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	example9()
	{
		std::ostringstream	ss;

		NS::vector<int> vec;
		NS::vector<int>::iterator	it1;
		NS::vector<int>::iterator	it2;
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		it1 = vec.begin();
		it2 = vec.begin() + 2;
		ss << " " << (it2 - it1);
		ss << " " << (it2 > it1);
		ss << " " << (it2 < it1);
		ss << " " << (it2 >= it1);
		ss << " " << (it2 <= it1);
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		it1 = it2;
		ss << " " << (it2 >= it1);
		ss << " " << (it2 <= it1);
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		return (ss.str());
	}
}
