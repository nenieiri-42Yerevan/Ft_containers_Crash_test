/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example28.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:20:10 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 28 */
/* count */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example28(double &_time)
	{
		std::ostringstream	ss;
		NS::map<int, int>	mp;

		ss << " " << mp.count(0);
		mp.insert(NS::make_pair(0, 0));
		ss << " " << mp.count(0);

		_time = 0;
		return (ss.str());
	}
}
