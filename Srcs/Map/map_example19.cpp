/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example19.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:23 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:30:47 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 19 */
/* Example for comparison functions */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example19(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(0, 0));
		B.insert(NS::pair<int, int>(-100, -10000));
		B.insert(NS::pair<int, int>(200, 20000));
		NS::map<int, int>	C;
		C.insert(NS::make_pair(0, 0));
		C.insert(NS::make_pair(-2, -2));
		C.insert(NS::make_pair(2, 2));
		NS::map<int, int>	D;
		D.insert(NS::pair<int, int>(0, 0));
		D.insert(NS::pair<int, int>(-1, 1));
		D.insert(NS::pair<int, int>(200, -20000));
		ss << " " << (A == B);
		ss << " " << (A == C);
		ss << " " << (A == D);
		ss << " " << (A != B);
		ss << " " << (A != C);
		ss << " " << (A != D);
		ss << " " << (A < B);
		ss << " " << (A < C);
		ss << " " << (A < D);
		ss << " " << (A <= B);
		ss << " " << (A <= C);
		ss << " " << (A <= D);
		ss << " " << (A > B);
		ss << " " << (A > C);
		ss << " " << (A > D);
		ss << " " << (A >= B);
		ss << " " << (A >= C);
		ss << " " << (A >= D);
		_time = 0;
		return (ss.str());
	}
}
