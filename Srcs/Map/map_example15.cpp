/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example15.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:29:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:29:25 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 15 */
/* Example for inserts */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example15(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(4, 0));
		A.insert(NS::make_pair(2, -2));
		A.insert(NS::make_pair(6, 2));
		A.insert(NS::make_pair(3, -1));
		A.insert(NS::make_pair(5, 1));
		A.insert(NS::make_pair(1, -3));
		ss << " " << A.size();
		NS::pair<NS::map<int, int>::iterator, bool>	res;
		res = A.insert(NS::make_pair(7, 3));
		ss << " " << res.second;
		ss << " " << res.first->second;
		ss << " " << A.size();
		res = A.insert(NS::pair<int, int>(6, 8));
		ss << " " << res.second;
		ss << " " << res.first->second;
		ss << " " << A.size();
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(1, 100));
		B.insert(NS::pair<int, int>(-1, -100));
		B.insert(NS::pair<int, int>(2, 200));
		NS::map<int, int>::iterator	it5;
		it5 = B.insert(B.begin(), NS::pair<int, int>(3, 300));
		ss << " " << it5->first;
		it5 = B.insert(B.begin(), NS::pair<int, int>(3, 300));
		ss << " " << it5->first;
		it5 = B.insert(B.end(), NS::pair<int, int>(-30, -3000));
		ss << " " << it5->first;
		it5 = B.insert(B.end(), NS::pair<int, int>(-30, -3000));
		ss << " " << it5->first;
		it5 = B.insert(--B.end(), NS::pair<int, int>(-2, -200));
		ss << " " << it5->first;
		it5 = B.insert(--B.end(), NS::pair<int, int>(-2, -200));
		ss << " " << it5->first;
		it5 = B.insert(++(++B.begin()), NS::pair<int, int>(-8, -800));
		ss << " " << it5->first;
		it5 = B.insert(++(++B.begin()), NS::pair<int, int>(-8, -800));
		ss << " " << it5->first;
		it5 = B.insert(--(--(--B.end())), NS::pair<int, int>(1000, 100000));
		ss << " " << it5->first;
		it5 = B.insert(--(--(--B.end())), NS::pair<int, int>(1000, 100000));
		ss << " " << it5->first;
		it5 = B.insert(--(--(--B.end())), NS::pair<int, int>(1000, 100000));
		ss << " " << it5->first << ",";
		for (NS::map<int, int>::iterator it = B.begin(); it != B.end(); ++it)
			ss << " " << it->second;
		ss << " " << B.size();
		NS::map<int, int>::iterator it10 = A.begin();
		NS::map<int, int>::iterator it11 = A.end();
		B.insert(it10, it11);
		for (NS::map<int, int>::iterator it = B.begin(); it != B.end(); ++it)
			ss << " " << it->second;
		ss << " " << B.size();
		B.clear();
		ss << " " << B.size();
		_time = 0;
		return (ss.str());
	}
}
