/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example50.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:51:00 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 14:51:34 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 50 */
/* operator > */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example50(double &_time)
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
		ss << " " << (v_int1 > v_int2);
		v_int2.push_back(2);
		ss << " " << (v_int1 > v_int2);
		ss << " " << (v_int1 > v_int3);
		ss << " " << (v_str1 > v_str2);

		_time = 0;
		return (ss.str());
	}
}
