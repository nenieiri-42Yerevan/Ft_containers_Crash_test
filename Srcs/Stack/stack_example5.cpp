/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_example5.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:27:22 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 5 */
/* operator != */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example5(double &_time)
	{
		std::ostringstream	ss;

		std::stack<int> s1, s2, s3, s4;
		std::stack<std::string> s5, s6, s7, s8, s9;

		s1.push(2);
		s2.push(3);
		s3.push(3);
		s4.push(4);
		s4.push(4);
		s5.push("122");
		s6.push("123");
		s7.push("124");
		s8.push("12");
		s9.push("123");

		ss << " " << (s1 != s1);
		ss << " " << (s3 != s3);
		ss << " " << (s5 != s9);
		ss << " " << (s1 != s2);
		ss << " " << (s3 != s4);
		ss << " " << (s6 != s6);
		ss << " " << (s1 != s3);
		ss << " " << (s4 != s4);
		ss << " " << (s6 != s7);
		ss << " " << (s1 != s4);
		ss << " " << (s5 != s5);
		ss << " " << (s6 != s8);
		ss << " " << (s2 != s2);
		ss << " " << (s5 != s6);
		ss << " " << (s6 != s9);
		ss << " " << (s2 != s3);
		ss << " " << (s5 != s7);
		ss << " " << (s7 != s7);
		ss << " " << (s2 != s4);
		ss << " " << (s5 != s8);
		ss << " " << (s7 != s8);
		ss << " " << (s7 != s9);
		ss << " " << (s8 != s8);
		ss << " " << (s8 != s9);
		ss << " " << (s9 != s9);

		_time = 0;
		return (ss.str());
	}
}
