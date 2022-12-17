/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example25.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 14:14:46 by tumolabs         ###   ########.fr       */
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
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;

		mp.clear();
		for (int i = 0, j = 0; i < 250000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));
		ss << " " << mp.size();

		gettimeofday(&start, NULL);
		mp.clear();
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		ss << " " << mp.size();
		NS::map<int, int>::iterator	it = mp.begin();
		if (it == mp.end())
			ss << " " << 1;

		return (ss.str());
	}
}
