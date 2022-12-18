/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example52.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 16:19:25 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 52 */
/* upper_bound() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example52(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		start = clock();

		NS::map<int, int, std::greater<int> > mp2;
		mp.insert(NS::make_pair(10, 10));
		mp2.insert(NS::make_pair(10, 10));
		if (mp.upper_bound(11) == mp.end())
			ss << " " << 1;
		if (mp2.upper_bound(1) == mp2.end())
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
			it = mp.upper_bound(i);
			ss << " " << it->first;
		}
		for (int i = 11; i < 70; i += 10)
		{
			it = mp2.upper_bound(i);
			ss << " " << it->first;
		}
		NS::map<int, int> mp3;
		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp3.insert(NS::make_pair(i, j));
		
		NS::map<int, int> mp4;
		mp.insert(NS::make_pair(-10, 10));
		mp.insert(NS::make_pair(-20, 20));
		ss << " " << ((--mp.upper_bound(0))->first);

		start = clock();
		mp3.upper_bound(490000);
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
