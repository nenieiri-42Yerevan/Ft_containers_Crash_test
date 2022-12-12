/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   23.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:22 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:28:06 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 23 */
/* Example for rbegin, rend */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example23()
	{
		std::ostringstream	ss;

		NS::vector<int> vec;
		for (size_t i = 0; i < 5; ++i)
			vec.push_back(i);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<int>::reverse_iterator	rit1;
		rit1 = vec.rbegin();
		ss << " " << *rit1;
		rit1 = vec.rend() - 1;
		ss << " " << *rit1;
		NS::vector<int>::reverse_iterator	rit2(rit1);
		ss << " " << *(rit2 - 1);
		NS::vector<int>::const_reverse_iterator	rit3 = rit2;
		ss << " " << *rit3;
		ss << " " << (rit3 == rit2);
		ss << " " << (rit3 != rit2);
		ss << " " << (rit3 < rit2);
		ss << " " << (rit3 <= rit2);
		ss << " " << (rit3 > rit2);
		ss << " " << (rit3 >= rit2);
		rit3 = rit2 - 1;
		ss << " " << (rit3 == rit2);
		ss << " " << (rit3 != rit2);
		ss << " " << (rit3 < rit2);
		ss << " " << (rit3 <= rit2);
		ss << " " << (rit3 > rit2);
		ss << " " << (rit3 >= rit2);
		ss << " " << *(1 + rit3);
		rit2 += 3;
		rit3 += 3;
		ss << " " << (rit2 - rit1);
		ss << " " << (rit3 - rit2);
		return (ss.str());
	}
}
