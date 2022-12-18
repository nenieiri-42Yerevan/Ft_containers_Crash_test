/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example35.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:22:09 by tumolabs         ###   ########.fr       */
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
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		NS::map<int, int> mp2;

		start = clock();
		mp2.insert(mp.begin(), mp.end());
		end = clock();
		_time = (double)(end - start);

		NS::map<int, int>::iterator it2 = mp2.begin();
		for (; it2 != mp2.end(); ++it2)
		{
			ss << " " << it2->first;
			ss << " " << it2->second;
		}

		return (ss.str());
	}
}
