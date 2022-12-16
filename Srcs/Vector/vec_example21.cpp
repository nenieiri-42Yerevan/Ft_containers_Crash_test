/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:35:40 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:19:05 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 21 */
/* Example for relational operators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example21(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<char> vec1;
		NS::vector<char> vec2;
		vec1.push_back('h');
		vec1.push_back('e');
		vec1.push_back('l');
		vec1.push_back('l');
		vec1.push_back('o');
		vec2.push_back('h');
		vec2.push_back('e');
		vec2.push_back('l');
		vec2.push_back('l');
		vec2.push_back('o');
		for (size_t i = 0; i < vec1.size(); ++i)
			ss << vec1[i];
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << vec2[i];
		ss << " " << (vec1 == vec2);
		ss << " " << (vec1 != vec2);
		ss << " " << (vec1 < vec2);
		ss << " " << (vec1 <= vec2);
		ss << " " << (vec1 > vec2);
		ss << " " << (vec1 >= vec2);
		vec2.push_back('o');
		ss << " " << (vec1 == vec2);
		ss << " " << (vec1 != vec2);
		ss << " " << (vec1 < vec2);
		ss << " " << (vec1 <= vec2);
		ss << " " << (vec1 > vec2);
		ss << " " << (vec1 >= vec2);
		vec1.push_back('o');
		vec1.push_back('o');
		ss << " " << (vec1 == vec2);
		ss << " " << (vec1 != vec2);
		ss << " " << (vec1 < vec2);
		ss << " " << (vec1 <= vec2);
		ss << " " << (vec1 > vec2);
		ss << " " << (vec1 >= vec2);
		vec1.pop_back();
		vec1.erase(vec1.begin() + 1);
		vec1.insert(vec1.begin() + 1, 'E');
		for (size_t i = 0; i < vec1.size(); ++i)
			ss << vec1[i];
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << vec2[i];
		ss << " " << (vec1 == vec2);
		ss << " " << (vec1 != vec2);
		ss << " " << (vec1 < vec2);
		ss << " " << (vec1 <= vec2);
		ss << " " << (vec1 > vec2);
		ss << " " << (vec1 >= vec2);
		_time = 0;
		return (ss.str());
	}
}
