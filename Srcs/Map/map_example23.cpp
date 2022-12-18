/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example23.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:18:44 by tumolabs         ###   ########.fr       */
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
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;
		NS::map<int, int>	mp2;

		for (int i = 0, j = 10; i < 200000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));
		for (int i = 200000, j = 200010; i < 400000; ++i, ++j)
			mp2.insert(NS::make_pair(i, j));

		start = clock();
		mp2 = mp;
		end = clock();
		_time = (double)(end - start);

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
