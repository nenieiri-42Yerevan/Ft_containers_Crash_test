/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example20.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:40 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/23 18:33:28 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 20 */
/* Example for operator[] and at() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example20(double &_time)
	{
		std::ostringstream	ss;

		NS::map<char, char>	A;
		A['a'] = 'A';
		A['b'] = 'B';
		A['c'] = A['b'];
		ss << " " << A['a'];
		ss << " " << A['b'];
		ss << " " << A['c'];
		ss << " " << A['d'];
		A.at('a') = 'a';
		A.at('b') = 'b';
		A.at('c') = 'c';
		ss << " " << A.at('a');
		ss << " " << A.at('b');
		ss << " " << A.at('c');
		try
		{
			A.at('t');
		}
		catch (const std::out_of_range &e)
		{
			ss << " " << 1;
		}
		_time = 0;
		return (ss.str());
	}
}
