/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example32.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:15:14 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 32 */
/* erase(Key) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example32(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		ss << " " << mp.erase(3);
		for (int i = 0, j = 0; i < 300000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		NS::map<int, int>::iterator	it = mp.begin();
		ss << " " << it->first;
		ss << " " << mp.erase(-5);
		ss << " " << mp.size();
		ss << " " << mp.erase(0);
		ss << " " << mp.size();
		it = mp.begin();
		ss << " " << it->first;

		NS::map<int, int>::iterator	it4 = mp.begin();

		start = clock();
		for (; it4 != mp.end(); it4 = mp.begin())
			mp.erase(it4->first);
		end = clock();
		_time = (double)(end - start);

		ss << " " << mp.erase(30000 - 1);
		ss << " " << mp.size();

		NS::map<int, int>	mp2;
		for (int i = 0, j = 0; i < 10 ; ++i, ++j)
			mp2.insert(NS::make_pair(i, j));
		mp2.erase(2);
		mp2.erase(7);

		NS::map<int, int>::iterator it3 = mp2.begin();
		for (; it3 != mp2.end(); ++it3)
		{
			ss << " " << it3->first;
			ss << " " << it3->second;
		}

		return (ss.str());
	}
}
