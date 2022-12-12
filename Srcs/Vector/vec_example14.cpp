/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:03:06 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:46 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 14 */
/* Example for insert */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example14()
	{
		std::ostringstream	ss;

		NS::vector<int> vec(5, int(58));
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		NS::vector<int> vec1(2, int(42));
		vec.insert(vec.begin() + 2, vec1.begin(), vec1.end());
		vec.insert(vec.begin(), vec1.begin(), vec1.end());
		vec.insert(vec.end(), vec1.begin(), vec1.end());
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		vec.reserve(30);
		NS::vector<int> vec2(2, int(21));
		vec.insert(vec.begin() + 2, vec2.begin(), vec2.end());
		vec.insert(vec.begin(), vec2.begin(), vec2.end());
		vec.insert(vec.end(), vec2.begin(), vec2.end());
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		return (ss.str());
	}
}
