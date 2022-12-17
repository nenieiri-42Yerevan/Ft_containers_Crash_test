/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example34.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:23:41 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 34 */
/* find() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example34(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;

		for (int i = -750000, j = 0; i < 750000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		gettimeofday(&start, NULL);
		NS::map<int, int>::iterator it = mp.find(340000);
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		ss << " " << it->first;
		ss << " " << it->second;

		it = mp.find(-340000);
		ss << " " << it->first;
		ss << " " << it->second;
		it = mp.find(-750000);
		if (it == mp.end())
			ss << " " << 1;

		return (ss.str());
	}
}
