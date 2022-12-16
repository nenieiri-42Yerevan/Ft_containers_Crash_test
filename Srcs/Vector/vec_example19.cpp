/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:56 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:18:17 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 19 */
/* Example for swaps */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example19(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<int> vec(3, int(42));
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<int> vec2(9, int(21));
		ss << " " << vec2.capacity();
		ss << " " << vec2.size();
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << ' ' << vec2[i];
		vec.swap(vec2);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec2.capacity();
		ss << " " << vec2.size();
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << ' ' << vec2[i];
		_time = 0;
		return (ss.str());
	}
}
