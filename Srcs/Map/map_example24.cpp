/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example24.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 14:14:15 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 24 */
/* Example for at */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example24(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 10; i < 700000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		gettimeofday(&start, NULL);
		try
		{
			ss << " " << mp.at(400000);
			ss << " " <<  mp.at(400000 + 1);
		}
		catch (std::exception &e)
		{
			ss << " " << 1;
		}
		gettimeofday(&end, NULL);
		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec));

		return (ss.str());
	}
}
