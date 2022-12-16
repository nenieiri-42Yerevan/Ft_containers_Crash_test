/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:56 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:24:36 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 2 */
/* Example for map constructors, size, empty, max_size */
/* Example for iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example2(double &_time)
	{
		std::ostringstream	ss;

		NS::pair<int, std::string>	pair1;
		pair1.first = 0; 
		pair1.second = "A"; 
		NS::map<int, std::string> A;
		NS::map<int, std::string>::iterator it1;
		ss << " " << A.size();
		ss << " " << A.empty();
		A.max_size();
		A.insert(pair1);
		ss << " " << A.size();
		A.insert(NS::make_pair(-1, "B"));
		ss << " " << A.size();
		A.insert(NS::make_pair(1, "C"));
		ss << " " << pair1.first;
		ss << " " << pair1.second;
		ss << " " << A.size();
		A.max_size();
		ss << " " << A.empty();
		it1 = A.begin();
		ss << " " << (*it1).first;
		ss << " " << it1->first;
		ss << " " << it1->second;
		ss << " " << (it1++)->first;
		ss << " " << (++it1)->first;
		ss << " " << (--it1)->second;
		ss << " " << (it1--)->second;
		ss << " " << it1->second;
		_time = 0;
		return (ss.str());
	}
}
