/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   22.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:36:12 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 22 */
/* Example for reverse iterator */

#include "test.hpp"

namespace	NS_TEST
{
	void	example22()
	{
		NS::vector<int> vec;
		for (size_t i = 0; i < 5; ++i)
			vec.push_back(i);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		NS::vector<int>::reverse_iterator	rit(vec.end());
		std::cout << " " << *rit;
		std::cout << " " << *(rit++);
		std::cout << " " << *(++rit);
		std::cout << " " << *(rit--);
		std::cout << " " << *(--rit);
		NS::vector<int>::reverse_iterator	rit2(vec.begin() + 1);
		std::cout << " " << *rit2;
		std::cout << " " << *(rit2 - 1);
		rit2 -= 2;
		std::cout << " " << *rit2;
		std::cout << " " << *(rit2 + 1);
		rit2 += 1;
		std::cout << " " << *rit2;
		NS::vector<int>::reverse_iterator	rit3;
		rit3 = rit2;
		std::cout << " " << *rit3;
		rit3 = rit3 - 2;
		std::cout << " " << *(rit3.base());
		std::cout << " " << rit3[1];
		std::cout << " " << rit3[3];
		NS::vector<int>::reverse_iterator	rit4(rit3);
		std::cout << " " << *rit4;
	}
}
