/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example47.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 15:15:50 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 47 */
/* operator >= */

#include "test.hpp"

namespace	NS_TEST
{ 
	const std::string	map_example47(double &_time)
	{
		std::ostringstream	ss;

		NS::map<int, int> m1, m2, m3, m4;
		NS::map<std::string, std::string> m5, m6, m7, m8, m9;

		m1.insert(NS::make_pair(2, 3));
		m2.insert(NS::make_pair(3, 3));
		m3.insert(NS::make_pair(3, 4));
		m4.insert(NS::make_pair(4, 4));
		m4.insert(NS::make_pair(4, 5));
		m5.insert(NS::make_pair("123", "123"));
		m6.insert(NS::make_pair("123", "124"));
		m7.insert(NS::make_pair("124", "123"));
		m8.insert(NS::make_pair("12", "123"));
		m9.insert(NS::make_pair("123", "12"));

		ss << " " << (m1 >= m1);
		ss << " " << (m3 >= m3);
		ss << " " << (m5 >= m9);
		ss << " " << (m1 >= m2);
		ss << " " << (m3 >= m4);
		ss << " " << (m6 >= m6);
		ss << " " << (m1 >= m3);
		ss << " " << (m4 >= m4);
		ss << " " << (m6 >= m7);
		ss << " " << (m1 >= m4);
		ss << " " << (m5 >= m5);
		ss << " " << (m6 >= m8);
		ss << " " << (m2 >= m2);
		ss << " " << (m5 >= m6);
		ss << " " << (m6 >= m9);
		ss << " " << (m2 >= m3);
		ss << " " << (m5 >= m7);
		ss << " " << (m7 >= m7);
		ss << " " << (m2 >= m4);
		ss << " " << (m5 >= m8);
		ss << " " << (m7 >= m8);
		ss << " " << (m7 >= m9);
		ss << " " << (m8 >= m8);
		ss << " " << (m8 >= m9);
		ss << " " << (m9 >= m9);

		_time = 0;
		return (ss.str());
	}
}
