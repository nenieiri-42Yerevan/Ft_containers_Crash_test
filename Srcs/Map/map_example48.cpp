/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example48.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 15:43:27 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 48 */
/* operator [] */

#include "test.hpp"

namespace	NS_TEST
{ 
	const std::string	map_example48(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		mp.insert(NS::make_pair(3, 3));
		NS::map<int, int>::iterator it = mp.begin();

		start = clock();

		ss << " " << it->first;
		ss << " " << it->second;
		mp[3] = 10;
		ss << " " << it->first;
		ss << " " << it->second;
		mp[2] = 9;
		it = mp.begin();
		ss << " " << it->first;
		ss << " " << it->second;
		it++;
		ss << " " << it->first;
		ss << " " << it->second;
		ss << " " << mp.size();

		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
