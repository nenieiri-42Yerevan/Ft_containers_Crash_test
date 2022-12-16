/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example13.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:28:56 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:28:53 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 13 */
/* Example for count */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example13(double &_time)
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('b', -2));
		A.insert(NS::make_pair('f', 2));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('e', 1));
		A.insert(NS::make_pair('g', 3));
		for (char c = 'a'; c < 'k'; ++c)
			ss << " " << A.count(c);
		A.clear();
		ss << " " << A.size();
		_time = 0;
		return (ss.str());
	}
}
