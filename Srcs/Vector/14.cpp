/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:03:06 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:30:52 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 14 */
/* Example for insert */

#include "test.hpp"

namespace	NS_TEST
{
	void	example14()
	{
		NS::vector<int> vec(5, int(58));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		NS::vector<int> vec1(2, int(42));
		vec.insert(vec.begin() + 2, vec1.begin(), vec1.end());
		vec.insert(vec.begin(), vec1.begin(), vec1.end());
		vec.insert(vec.end(), vec1.begin(), vec1.end());
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.reserve(30);
		NS::vector<int> vec2(2, int(21));
		vec.insert(vec.begin() + 2, vec2.begin(), vec2.end());
		vec.insert(vec.begin(), vec2.begin(), vec2.end());
		vec.insert(vec.end(), vec2.begin(), vec2.end());
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
	}
}
