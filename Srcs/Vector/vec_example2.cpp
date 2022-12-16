/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:55:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:11:26 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 2 */
/* Example for constructor with 2 parametrs with double */
/* Example for operator[] */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example2(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<double> vec(3, double(58));
		ss << std::fixed << std::setprecision(2);
		(ss << " ", ss << vec.capacity());
		(ss << " ", ss << vec.size());
		(ss << " ", ss << vec[2]);
		_time = 0;
		return (ss.str());
	}
}
