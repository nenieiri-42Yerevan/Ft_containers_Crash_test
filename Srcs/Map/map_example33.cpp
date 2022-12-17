/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example33.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:20:47 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 33 */
/* erase(pos) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example33(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 300000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		NS::map<int, int>::iterator it = mp.begin();
		ss << " " << it->first;
		mp.erase(it);
		ss << " " << mp.size();
		it = mp.begin();
		mp.erase(++it);
		ss << " " << mp.size();
		it = mp.begin();
		ss << " " << it->first;

		NS::map<int, int>::iterator it4 = mp.begin();
		gettimeofday(&start, NULL);
		for (; it4 != mp.end(); it4 = mp.begin())
			mp.erase(it4);
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		ss << " " << mp.size();
		NS::map<int, int> mp2;
		for (int i = 0, j = 0; i < 10 ; ++i, ++j)
			mp2.insert(NS::make_pair(i, j));

		NS::map<int, int>::iterator ittest = mp2.begin();
		for (int i = 0; i < 2; ++i)
			ittest++;
		mp2.erase(ittest);
		ittest = mp2.begin();
		for (int i = 0; i < 5; ++i)
			ittest++;
		mp2.erase(ittest);

		NS::map<int, int>::iterator it3 = mp2.begin();
		for (; it3 != mp2.end(); ++it3)
		{
			ss << " " << it3->first;
			ss << " " << it3->second;
		}

		return (ss.str());
	}
}
