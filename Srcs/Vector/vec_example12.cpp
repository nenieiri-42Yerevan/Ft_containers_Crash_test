/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:56:26 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:27 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 12 */
/* Example for insert */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example12()
	{
		std::ostringstream	ss;

		NS::vector<int> vec(5, int(58));
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		NS::vector<int>::iterator it = vec.begin() + 2;
		vec.insert(it, 3, 50);
		vec.insert(vec.begin(), 1, 1);
		vec.insert(vec.begin(), 0, 2);
		vec.insert(vec.end(), 3, 2);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		vec.reserve(30);
		it = vec.begin() + 2;
		vec.insert(it, 3, -50);
		vec.insert(vec.begin(), 0, -2);
		vec.insert(vec.end(), 3, -2);
		vec.insert(vec.begin(), 1, -1);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		return (ss.str());
	}
}
