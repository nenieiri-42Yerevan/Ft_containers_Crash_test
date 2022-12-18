/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example25.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:17:50 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 25 */
/* clear */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example25(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		mp.clear();
		for (int i = 0, j = 0; i < 250000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));
		ss << " " << mp.size();

		start = clock();
		mp.clear();
		end = clock();
		_time = (double)(end - start);

		ss << " " << mp.size();
		NS::map<int, int>::iterator	it = mp.begin();
		if (it == mp.end())
			ss << " " << 1;

		return (ss.str());
	}
}
