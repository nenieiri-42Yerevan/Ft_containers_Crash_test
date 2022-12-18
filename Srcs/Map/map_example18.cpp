/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example18.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:30:58 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 14:19:14 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 18 */
/* Example for swap */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example18(double &_time)
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
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(100, 10000));
		B.insert(NS::pair<int, int>(-100, -10000));
		B.insert(NS::pair<int, int>(200, 20000));
		NS::map<int, int>::iterator	it5;
		it5 = B.insert(B.begin(), NS::pair<int, int>(30, 3000));
		it5 = B.insert(B.end(), NS::pair<int, int>(-300, -30000));
		NS::map<int, int>::iterator	it11 = A.begin();
		NS::map<int, int>::iterator	it22 = B.begin();
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		ss << " " << A.size();
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		ss << " " << B.size();
		A.swap(B);
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		ss << " " << A.size();
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		ss << " " << B.size();
		ss << " " << (it11 == B.begin());
		ss << " " << (it22 == A.begin());
		swap(A, B);
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		ss << " " << A.size();
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		ss << " " << B.size();
		_time = 0;
		return (ss.str());
	}
}
