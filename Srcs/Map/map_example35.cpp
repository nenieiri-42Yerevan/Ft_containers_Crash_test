/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example35.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:35:42 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 35 */
/* insert(InputIt) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example35(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		NS::map<int, int> mp2;

		gettimeofday(&start, NULL);
		mp2.insert(mp.begin(), mp.end());
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		NS::map<int, int>::iterator it2 = mp2.begin();
		for (; it2 != mp2.end(); ++it2)
		{
			ss << " " << it2->first;
			ss << " " << it2->second;
		}

		return (ss.str());
	}
}
