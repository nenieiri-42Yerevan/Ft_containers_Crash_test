/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example50.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 16:03:58 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 50 */
/* size() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example50(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		for (int i = 0, j = 0; i < 1000000; ++i, ++j)
			mp.insert(NS::make_pair(i, j));

		start = clock();
		ss << " " << mp.size();
		end = clock();
		_time = (double)(end - start);

		for (int i = 0; i < 430000; ++i)
			mp.erase(i);
		ss << " " << mp.size();

		return (ss.str());
	}
}
