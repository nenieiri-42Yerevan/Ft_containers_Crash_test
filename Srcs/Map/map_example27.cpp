/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example27.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:17:18 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 27 */
/* constructor */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example27(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 10; i < 300000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		start = clock();
		NS::map<int, int> mp2(mp.begin(), mp.end());
		end = clock();
		_time = (double)(end - start);

		NS::map<int, int>::iterator it = mp2.begin();
		for (int i = 0; i < 300000; ++i, it++)
		{
			ss << " " << it->first;
			ss << " " << it->second;
		}

		return (ss.str());
	}
}
