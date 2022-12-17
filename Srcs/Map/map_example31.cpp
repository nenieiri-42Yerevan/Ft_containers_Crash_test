/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example31.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:20:32 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 31 */
/* erase(InputIt) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example31(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		gettimeofday(&start, NULL);
		mp.erase(mp.begin(), --mp.end());
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		ss << " " << mp.begin()->first;

		return (ss.str());
	}
}
