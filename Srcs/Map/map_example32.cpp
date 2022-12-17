/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example32.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:20:40 by tumolabs         ###   ########.fr       */
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
		struct timeval		start;
		struct timeval		end;
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

		gettimeofday(&start, NULL);
		for (; it4 != mp.end(); it4 = mp.begin())
			mp.erase(it4->first);
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

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
