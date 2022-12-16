/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:01 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:17:13 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 16 */
/* Example for resize */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example16(double &_time)
	{
		std::ostringstream	ss;
	
		NS::vector<int> vec(5, int(42));
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		vec.resize(7);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		vec.resize(11, 21);
		vec.resize(11);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		vec.resize(6);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		_time = 0;
		return (ss.str());
	}
}
