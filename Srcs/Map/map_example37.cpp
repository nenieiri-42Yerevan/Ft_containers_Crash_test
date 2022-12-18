/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example37.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 13:22:43 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 37 */
/* insert(value) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example37(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		NS::pair<NS::map<int, int>::iterator, bool> pair = mp.insert(NS::make_pair(7, 7));
		NS::map<int, int>::iterator it = mp.begin();
		ss << " " << it->first;
		ss << " " << it->second;
		ss << " " << pair.first->first;
		ss << " " << pair.first->second;
		ss << " " << pair.second;

		mp.insert(NS::make_pair(9, 9));
		NS::pair<NS::map<int, int>::iterator, bool> pair2 = mp.insert(NS::make_pair(9, 9));
		NS::map<int, int>::iterator it2 = pair.first;
		ss << " " << it2->first;
		ss << " " << it2->second;
		ss << " " << pair2.first->first;
		ss << " " << pair2.first->second;
		ss << " " << pair2.second;

		start = clock();
		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));
		end = clock();
		_time = (double)(end - start);

		NS::map<int, int>::iterator it3 = mp.begin();
		for (; it3 != mp.end(); ++it3)
		{
			ss << " " << it3->first;
			ss << " " << it3->second;
		}
		ss << " " << mp.size();

		return (ss.str());
	}
}
