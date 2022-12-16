/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example17.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:30:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:29:58 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 17 */
/* Example for equal_range and constructors*/

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example17(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		A.insert(NS::make_pair(-1, -1));
		A.insert(NS::make_pair(1, 1));
		A.insert(NS::make_pair(-3, -3));
		A.insert(NS::make_pair(3, 3));
		A.insert(NS::make_pair(-4, -4));
		A.insert(NS::make_pair(4, 4));
		NS::pair<NS::map<int, int>::iterator, NS::map<int, int>::iterator>	p;
		p = A.equal_range(-1);
		ss << " " << p.first->first;
		ss << " " << p.second->first;
		p = A.equal_range(-4);
		ss << " " << p.first->first;
		ss << " " << p.second->first;
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(100, 10000));
		B.insert(NS::pair<int, int>(-100, -10000));
		B.insert(NS::pair<int, int>(200, 20000));
		NS::map<int, int>::iterator	it5;
		it5 = B.insert(B.begin(), NS::pair<int, int>(30, 3000));
		it5 = B.insert(B.end(), NS::pair<int, int>(-300, -30000));
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		A = B;
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		NS::map<int, int>	C;
		C.insert(NS::make_pair(0, 0));
		C.insert(NS::make_pair(-2, -2));
		A = C;
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		NS::map<int, int>	D(B.begin(), B.end());
		for (NS::map<int, int>::iterator f = D.begin(); f != D.end(); ++f)
			ss << " " << f->second;
		_time = 0;
		return (ss.str());
	}
}
