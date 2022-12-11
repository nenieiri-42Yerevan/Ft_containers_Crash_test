/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:35:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 17:52:51 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 20 */
/* Example for swaps part 2 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	example20()
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
		swap(vec, vec2);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec2.capacity();
		ss << " " << vec2.size();
		for (size_t i = 0; i < vec2.size(); ++i)
			ss << ' ' << vec2[i];
		return (ss.str());
	}
}
