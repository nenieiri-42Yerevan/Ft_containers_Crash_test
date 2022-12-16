/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example22.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:32:11 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 16:09:31 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 22 */
/* Example from bounds */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example22(double &_time)
	{
		std::ostringstream	ss;

		std::vector<int> v;
		NS::map<int, int, std::greater<int> > mp2;
		mp2.insert(NS::make_pair(20, 20));
		mp2.insert(NS::make_pair(30, 30));
		mp2.insert(NS::make_pair(40, 40));
		mp2.insert(NS::make_pair(50, 50));
		mp2.insert(NS::make_pair(60, 60));
		NS::map<int, int>::iterator it;
		for (int i = 11; i < 70; i += 10) {
			it = mp2.upper_bound(i);
			if (i == 11)
				v.push_back((it == mp2.end()));
			else
				v.push_back(it->first);
		}
		for (std::vector<int>::iterator it1 = v.begin(); it1 != v.end(); ++it1)
			ss << " " << *it1;
		_time = 0;
		return (ss.str());
	}
}
