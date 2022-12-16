/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example1.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:24:07 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 1 */
/* Example for pair and make_pair */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example1(double &_time)
	{
		std::ostringstream	ss;

		NS::pair<int, std::string>	pair1;
		ss << " " << pair1.first;
		ss << " " << pair1.second;
		pair1 = NS::make_pair(1, "Nenie_Iri");
		ss << " " << pair1.first;
		ss << " " << pair1.second;
		NS::pair<int, std::string>	pair2(2, "HI");
		ss << " " << pair2.first;
		ss << " " << pair2.second;
		NS::pair<int, std::string>	pair3(pair1);
		ss << " " << pair3.first;
		ss << " " << pair3.second;
		ss << " " << NS::make_pair(4, 5).first;
		ss << " " << NS::make_pair(4, 5).second;
		NS::pair<int, int>	pair4(1, 5);
		NS::pair<int, int>	pair5(1, 4);
		ss << " " << (pair1 == pair2);
		ss << " " << (pair1 == pair3);
		ss << " " << (pair4 == pair5);
		ss << " " << (pair1 != pair2);
		ss << " " << (pair1 != pair3);
		ss << " " << (pair4 != pair5);
		ss << " " << (pair1 < pair2);
		ss << " " << (pair1 < pair3);
		ss << " " << (pair4 < pair5);
		ss << " " << (pair1 <= pair2);
		ss << " " << (pair1 <= pair3);
		ss << " " << (pair4 <= pair5);
		ss << " " << (pair1 > pair2);
		ss << " " << (pair1 > pair3);
		ss << " " << (pair4 > pair5);
		ss << " " << (pair1 >= pair2);
		ss << " " << (pair1 >= pair3);
		ss << " " << (pair4 >= pair5);
		_time = 0;
		return (ss.str());
	}
}
