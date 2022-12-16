/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example12.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:28:38 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:28:30 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 12 */
/* Example for find */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example12(double &_time)
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('b', -2));
		A.insert(NS::make_pair('f', 2));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('e', 1));
		A.insert(NS::make_pair('a', -3));
		A.insert(NS::make_pair('j', 3));
		ss << " " << A.find('e')->first;
		NS::map<char, int>::const_iterator	it1 = A.find('a');
		NS::map<char, int>::const_iterator	it2 = A.find('o');
		while (it1 != it2)
			ss << " " << (it1++)->first;
		_time = 0;
		return (ss.str());
	}
}
