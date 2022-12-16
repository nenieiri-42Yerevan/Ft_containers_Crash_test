/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example14.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:29:14 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:29:08 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 14 */
/* Example for bounds */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example14(double &_time)
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('b', -2));
		A.insert(NS::make_pair('f', 2));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('e', 1));
		A.insert(NS::make_pair('a', -3));
		A.insert(NS::make_pair('g', 3));
		NS::map<char, int>::iterator	itlow;
		NS::map<char, int>::iterator	itup;
		itlow = A.lower_bound('c');
		itup = A.lower_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.lower_bound('0');
		itup = A.lower_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.lower_bound('c');
		itup = A.lower_bound('x');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.upper_bound('c');
		itup = A.upper_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.upper_bound('0');
		itup = A.upper_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.upper_bound('c');
		itup = A.upper_bound('x');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.lower_bound('b');
		itup = A.upper_bound('d');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		A.clear();
		ss << " " << A.size();
		_time = 0;
		return (ss.str());
	}
}
