/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:33:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:54 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 15 */
/* Example for erase */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example15()
	{
		std::ostringstream	ss;

		NS::vector<int> vec;
		for (size_t i = 0; i < 9; ++i)
			vec.push_back(i);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<int>::iterator it;
		it = vec.erase(vec.begin() + 1);
		ss << " " << *it;
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		it = vec.erase(vec.begin() + 2, vec.end() - 2);
		ss << " " << *it;
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		it = vec.erase(vec.begin(), vec.begin() + 1);
		ss << " " << *it;
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		it = vec.erase(vec.begin(), vec.begin());
		ss << " " << *it;
		it = vec.erase(vec.end() - 2, vec.end() - 1);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << *it;
		it = vec.erase(vec.begin(), vec.end());
		ss << " " << *it;
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		return (ss.str());
	}
}
