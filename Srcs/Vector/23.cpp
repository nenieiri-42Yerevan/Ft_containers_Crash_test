/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   23.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:22 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:36:30 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 23 */
/* Example for rbegin, rend */

#include "test.hpp"

namespace	NS_TEST
{
	void	example23()
	{
		NS::vector<int> vec;
		for (size_t i = 0; i < 5; ++i)
			vec.push_back(i);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		NS::vector<int>::reverse_iterator	rit1;
		rit1 = vec.rbegin();
		std::cout << " " << *rit1;
		rit1 = vec.rend() - 1;
		std::cout << " " << *rit1;
		NS::vector<int>::reverse_iterator	rit2(rit1);
		std::cout << " " << *(rit2 - 1);
		NS::vector<int>::const_reverse_iterator	rit3 = rit2;
		std::cout << " " << *rit3;
		std::cout << " " << (rit3 == rit2);
		std::cout << " " << (rit3 != rit2);
		std::cout << " " << (rit3 < rit2);
		std::cout << " " << (rit3 <= rit2);
		std::cout << " " << (rit3 > rit2);
		std::cout << " " << (rit3 >= rit2);
		rit3 = rit2 - 1;
		std::cout << " " << (rit3 == rit2);
		std::cout << " " << (rit3 != rit2);
		std::cout << " " << (rit3 < rit2);
		std::cout << " " << (rit3 <= rit2);
		std::cout << " " << (rit3 > rit2);
		std::cout << " " << (rit3 >= rit2);
		std::cout << " " << *(1 + rit3);
		rit2 += 3;
		rit3 += 3;
		std::cout << " " << (rit2 - rit1);
		std::cout << " " << (rit3 - rit2);
	}
}
