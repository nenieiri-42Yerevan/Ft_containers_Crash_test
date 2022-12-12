/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:39:20 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:12 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 10 */
/* Example for const iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example10()
	{
		std::ostringstream	ss;

		NS::vector< int> vec;
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<int>::const_iterator	it1 = vec.begin();
		NS::vector<int>::const_iterator	it2 = vec.begin() + 2;
		ss << " " << (it2 - it1);
		ss << " " << (it2 > it1);
		ss << " " << (it2 < it1);
		ss << " " << (it2 >= it1);
		ss << " " << (it2 <= it1);
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		NS::vector<int>::const_iterator	it3 = vec.begin() + 2;
		NS::vector<int>::const_iterator	it4 = vec.begin() + 2;
		ss << " " << (it4 >= it3);
		ss << " " << (it4 <= it3);
		ss << " " << (it4 == it3);
		ss << " " << (it4 != it3);
		return (ss.str());
	}
}
