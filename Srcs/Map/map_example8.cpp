/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example8.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:27:26 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:27:04 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 8 */
/* Example for other compare function */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example8(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, std::string, std::greater<int> > A;
		NS::map<int, std::string, std::greater<int> >::iterator it1;
		NS::map<int, std::string, std::greater<int> >::iterator it2;
		it1 = A.begin();
		it2 = A.end();
		ss << (it1 == it2);
		A.insert(NS::make_pair(0, "0A"));
		A.insert(NS::make_pair(-2, "-2B"));
		ss << " " << A.size();
		A.insert(NS::make_pair(2, "2C"));
		A.insert(NS::make_pair(-1, "-1D"));
		A.insert(NS::make_pair(-3, "-3E"));
		A.insert(NS::make_pair(1, "1F"));
		A.insert(NS::make_pair(3, "3J"));
		ss << " " << A.size();
		it1 = A.begin();
		it2 = A.end();
		ss << " " << (it1 == it2);
		ss << " " << it1->first;
		ss << " " << (--it2)->second;
		ss << " " << (it2--)->second;
		ss << " " << it2->second;
		it2->second = "hello";
		it2 = A.end();
		while (it1 != it2)
			ss << " " << (it1++)->second;
		_time = 0;
		return (ss.str());
	}
}
