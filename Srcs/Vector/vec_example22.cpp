/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   22.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:19:25 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 22 */
/* Example for reverse iterator */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example22(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<int> vec;
		for (size_t i = 0; i < 5; ++i)
			vec.push_back(i);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		NS::vector<int>::reverse_iterator	rit(vec.end());
		ss << " " << *rit;
		ss << " " << *(rit++);
		ss << " " << *(++rit);
		ss << " " << *(rit--);
		ss << " " << *(--rit);
		NS::vector<int>::reverse_iterator	rit2(vec.begin() + 1);
		ss << " " << *rit2;
		ss << " " << *(rit2 - 1);
		rit2 -= 2;
		ss << " " << *rit2;
		ss << " " << *(rit2 + 1);
		rit2 += 1;
		ss << " " << *rit2;
		NS::vector<int>::reverse_iterator	rit3;
		rit3 = rit2;
		ss << " " << *rit3;
		rit3 = rit3 - 2;
		ss << " " << *(rit3.base());
		ss << " " << rit3[1];
		ss << " " << rit3[3];
		NS::vector<int>::reverse_iterator	rit4(rit3);
		ss << " " << *rit4;
		_time = 0;
		return (ss.str());
	}
}
