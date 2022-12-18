/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example51.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 16:10:32 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 51 */
/* swap() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example51(double &_time)
	{
		std::ostringstream	ss;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 250000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		NS::map<int, int>	mp2;

		for (int i = 250000, j = 0; i < 350000; ++i, --j)
			mp.insert(NS::make_pair(i, j));
		
		long *adr1 = reinterpret_cast<long *>(&mp);
		long *adr2 = reinterpret_cast<long *>(&mp2);
		mp.swap(mp2);
		if (reinterpret_cast<long *>(&mp) == adr1 && reinterpret_cast<long *>(&mp2) == adr2)
			ss << " " << 1;

		ss << " " << mp2.size();
		NS::map<int, int>::iterator it = mp2.begin();
		for (; it != mp2.end(); ++it)
		{
			ss << " " << it->first;
			ss << " " << it->second;
		}
		NS::swap(mp, mp2);
		NS::map<int, int>::iterator it2 = mp2.begin();
		for (; it2 != mp2.end(); ++it2)
		{
			ss << " " << it->first;
			ss << " " << it->second;
		}

		_time = 0;
		return (ss.str());
	}
}
