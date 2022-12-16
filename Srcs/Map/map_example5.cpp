/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example5.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:25:51 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:26:03 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 5 */
/* Example for iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example5(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, std::string>				tree;
		NS::map<int, std::string>::iterator	it1;
		NS::map<int, std::string>::iterator	it2;
		tree.insert(NS::make_pair(0, "0A"));
		tree.insert(NS::make_pair(-2, "-2B"));
		tree.insert(NS::make_pair(2, "2C"));
		tree.insert(NS::make_pair(-1, "-1D"));
		tree.insert(NS::make_pair(-3, "-3E"));
		tree.insert(NS::make_pair(1, "1F"));
		tree.insert(NS::make_pair(3, "3J"));
		it1 = tree.begin();
		it2 = tree.begin();
		++it2;
		++it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		it1 = it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		++it1;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		_time = 0;
		return (ss.str());
	}
}
