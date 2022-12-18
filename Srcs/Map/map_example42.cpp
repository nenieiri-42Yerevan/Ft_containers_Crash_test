/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example42.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 12:52:36 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 42 */
/* lower_bound() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example42(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;

		NS::map<int, int>	mp;
		NS::map<int, int, std::greater<int> > mp2;
		mp.insert(NS::make_pair(10, 10));
		mp2.insert(NS::make_pair(10, 10));
		if (mp.lower_bound(11) == mp.end())
			ss << " " << 1;
		if (mp2.lower_bound(1) == mp2.end())
			ss << " " << 1;

		mp.insert(NS::make_pair(20, 20));
		mp.insert(NS::make_pair(30, 30));
		mp.insert(NS::make_pair(40, 40));
		mp.insert(NS::make_pair(50, 50));
		mp.insert(NS::make_pair(60, 60));
		mp2.insert(NS::make_pair(20, 20));
		mp2.insert(NS::make_pair(30, 30));
		mp2.insert(NS::make_pair(40, 40));
		mp2.insert(NS::make_pair(50, 50));
		mp2.insert(NS::make_pair(60, 60));

		NS::map<int, int>::iterator it;
		for (int i = 1; i < 60; i += 10)
		{
			it = mp.lower_bound(i);
			ss << " " << it->first;
		}
		for (int i = 11; i < 70; i += 10)
		{
			it = mp2.lower_bound(i);
			ss << " " << it->first;
		}
		NS::map<int, int> mp3;
		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp3.insert(NS::make_pair(i, j));
		
		start = clock();
		mp3.lower_bound(490000);
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
