/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:36:19 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:14:19 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 9 */
/* Example for iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example9(double &_time)
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
		_time = 0;
		return (ss.str());
	}
}
