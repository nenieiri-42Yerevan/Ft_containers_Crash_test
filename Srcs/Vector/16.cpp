/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:01 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 17:47:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 16 */
/* Example for resize */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	example16()
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
		return (ss.str());
	}
}
