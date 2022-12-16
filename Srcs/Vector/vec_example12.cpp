/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:56:26 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:15:48 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 12 */
/* Example for insert */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example12(double &_time)
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
		_time = 0;
		return (ss.str());
	}
}
