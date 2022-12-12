/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:27:18 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 18 */
/* Example for assign part 2 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example18()
	{
		std::ostringstream	ss;

		NS::vector<int> vec(5, int(42));
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<int> vec2(2, int(21));
		vec.assign(vec2.begin(), vec2.end());
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		vec2.assign(11, 42);
		vec.assign(vec2.begin(), vec2.end());
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		vec.assign(vec2.begin(), vec2.begin());
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		return (ss.str());
	}
}
