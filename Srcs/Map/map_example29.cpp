/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example29.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:16:44 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 29 */
/* empty() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example29(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		start = clock();
		ss << " " << mp.empty();
		mp.insert(NS::make_pair(3, 3));
		ss << " " << mp.empty();
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
