/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example39.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 17:03:02 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 39 */
/* key_comp() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example39(double &_time)
	{
		std::ostringstream	ss;
		NS::map<int, int>	mp;

		NS::map<int, int, std::greater<int> > mp2;
		NS::map<int, int, std::equal_to<int> > mp3;

		ss << " " << mp.key_comp()(1, 2);
		ss << " " << mp2.key_comp()(1, 2);
		ss << " " << mp3.key_comp()(1, 2);

		_time = 0;
		return (ss.str());
	}
}
