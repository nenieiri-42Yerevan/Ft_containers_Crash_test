/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example49.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 16:01:07 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 49 */
/* reverse iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example49(double &_time)
	{
		std::ostringstream	ss;
		NS::map<int, int>	mp;

		mp.insert(NS::make_pair(5, 5));
		mp.insert(NS::make_pair(3, 3));
		mp.insert(NS::make_pair(7, 7));

		NS::map<int, int>::reverse_iterator rit = mp.rbegin();
		NS::map<int, int>::reverse_iterator rit2 = mp.rend();
		ss << " " << (rit->first);
		rit++;
		rit2--;
		ss << " " << (rit->first);
		ss << " " << (rit2->first);
		rit++;
		ss << " " << (*rit == *rit2);
		rit2--;
		ss << " " << (rit->first);
		ss << " " << (rit2->first);
		ss << " " << (*rit2 > *rit);
		ss << " " << (*rit2 < *rit);
		ss << " " << ((--rit)->first);
		ss << " " << ((++rit2)->first);
		ss << " " << ((rit--)->first);
		ss << " " << ((rit2++)->first);

		_time = 0;
		return (ss.str());
	}
}
