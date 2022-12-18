/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example38.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 13:19:04 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 38 */
/* iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example38(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		NS::map<int, int> mpp;
		mpp.insert(NS::make_pair(16, 3));
		mpp.insert(NS::make_pair(8, 3));
		mpp.insert(NS::make_pair(23, 3));
		mpp.insert(NS::make_pair(7, 3));
		mpp.insert(NS::make_pair(19, 3));
		mpp.insert(NS::make_pair(29, 3));
		mpp.insert(NS::make_pair(41, 3));
		mpp.insert(NS::make_pair(4, 3));
		mpp.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mpp.begin(); it != mpp.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mpp.end(); it != mpp.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int> mp0;
		NS::map<int, int>::iterator ii = mp0.insert(NS::make_pair(3, 3)).first;
		ii++;
		ss << " " << ((--ii)->first);
		for (int i = 0, j = 10; i < 5; ++i, ++j)
			mp.insert(NS::make_pair(i, j));
		NS::map<int, int>::iterator it = mp.begin();
		NS::map<int, int>::iterator it2 = mp.end();

		start = clock();
		ss << " " << it->first;
		it++;
		it++;
		it++;
		it++;
		ss << " " << it->first;
		it++;
		it--;
		ss << " " << it->first;
		it2--;
		ss << " " << it2->first;
		ss << " " << (it2 == it);
		ss << " " << (--it2)->first;
		ss << " " << (it2--)->first;
		ss << " " << (it2++)->first;
		ss << " " << (++it2)->first;
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
