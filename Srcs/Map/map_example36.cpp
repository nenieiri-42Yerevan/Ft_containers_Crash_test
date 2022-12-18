/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example36.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:09:08 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 36 */
/* insert(hint) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example36(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		NS::map<int, int>::iterator it = mp.end();

		start = clock();
		for (int i = 0, j = 0; i < 500000; ++i, ++j)
			mp.insert(it, NS::make_pair(i, j));
		end = clock();
		_time = (double)(end - start);

		NS::map<int, int>::iterator it2 = mp.begin();
		for (; it2 != mp.end(); ++it2)
		{
			ss << " " << it2->first;
			ss << " " << it2->second;
		}

		return (ss.str());
	}
}
