/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example23.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:19:32 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 23 */
/* assign overload */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example23(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;
		NS::map<int, int>	mp2;

		for (int i = 0, j = 10; i < 200000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));
		for (int i = 200000, j = 200010; i < 400000; ++i, ++j)
			mp2.insert(NS::make_pair(i, j));

		gettimeofday(&start, NULL);
		mp2 = mp;
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		NS::map<int, int>::iterator it = mp2.begin();
		for (; it != mp2.end(); it++)
		{
			ss << " " << it->first;
			ss << " " << it->second;
		}
		ss << " " << mp2.size();

		return (ss.str());
	}
}
