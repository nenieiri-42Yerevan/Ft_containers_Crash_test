/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example31.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:15:41 by tumolabs         ###   ########.fr       */
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
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		start = clock();
		mp.erase(mp.begin(), --mp.end());
		end = clock();
		_time = (double)(end - start);

		ss << " " << mp.begin()->first;

		return (ss.str());
	}
}
