/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example47.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:06:55 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 14:12:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 47 */
/* operator != */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example47(double &_time)
	{
		std::ostringstream		ss;
		NS::vector<int>			v_int1;
		NS::vector<int>			v_int2;
		NS::vector<int>			v_int3;
		NS::vector<std::string>	v_str1;
		NS::vector<std::string>	v_str2;

		v_int1.push_back(1);
		v_int3.push_back(1);
		v_str1.push_back("aa");
		v_str2.push_back("ab");
		ss << " " << (v_int1 != v_int2);
		v_int2.push_back(2);
		ss << " " << (v_int1 != v_int2);
		ss << " " << (v_int1 != v_int3);
		ss << " " << (v_str1 != v_str2);

		_time = 0;
		return (ss.str());
	}
}
