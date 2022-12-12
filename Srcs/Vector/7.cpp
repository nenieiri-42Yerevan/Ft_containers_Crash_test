/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:21:49 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:25:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 7 */
/* Example for push_back() and pop_back() */
/* Example for clear() function */
/* Example for empty() function */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example7()
	{
		std::ostringstream	ss;

		NS::vector<int> vec(5, (int)(42));
		(ss << " ", ss << vec.capacity());
		(ss << " ", ss << vec.size());
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		vec.pop_back();
		vec.pop_back();
		(ss << " ", ss << vec.empty());
		for (size_t i = 0; i < vec.size(); ++i)
			(ss << ' ' << vec[i]);
		vec.clear();
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		ss << " " << vec.empty();
		return (ss.str());
	}
}
