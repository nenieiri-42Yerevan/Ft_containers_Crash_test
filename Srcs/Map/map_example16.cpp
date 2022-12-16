/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example16.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:30:14 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:29:43 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 16 */
/* Example for erase */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example16(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		A.insert(NS::make_pair(-1, -1));
		A.insert(NS::make_pair(1, 1));
		A.insert(NS::make_pair(-3, -3));
		A.insert(NS::make_pair(3, 3));
		A.insert(NS::make_pair(-4, -4));
		A.insert(NS::make_pair(4, 4));
		ss << " " << A.size() << " ";
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		NS::map<int, int>::iterator	it1;
		NS::map<int, int>::iterator	it2;
		it1 = A.find(-1);
		it2 = A.find(1);
		A.erase(it1, it2);
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		ss << " " << A.size() << " ";
		A.erase(A.find(-2));
		A.erase(A.find(2));
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		ss << " " << A.size() << " ";
		A.erase(A.find(-3));
		A.erase(A.find(4));
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		ss << " " << A.size();
		A.clear();
		ss << " " << A.size();
		_time = 0;
		return (ss.str());
	}
}
