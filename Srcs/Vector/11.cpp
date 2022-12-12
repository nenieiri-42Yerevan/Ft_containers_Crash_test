/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:41:49 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:20 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 11 */
/* Example for copy constructors */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example11()
	{
		std::ostringstream	ss;

		NS::vector<double> vec(2, double(58));
		ss << std::fixed << std::setprecision(2);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<double> vec2(vec);
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << ' ' << vec2[i];
		vec.push_back(42);
		vec2 = vec;
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << ' ' << vec2[i];
		return (ss.str());
	}
}
