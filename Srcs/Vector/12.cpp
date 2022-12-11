/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:56:26 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:31:14 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 12 */
/* Example for insert */

#include "test.hpp"

namespace	NS_TEST
{
	void	example12()
	{
		NS::vector<int> vec(5, int(58));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		NS::vector<int>::iterator it = vec.begin() + 2;
		vec.insert(it, 3, 50);
		vec.insert(vec.begin(), 1, 1);
		vec.insert(vec.begin(), 0, 2);
		vec.insert(vec.end(), 3, 2);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.reserve(30);
		it = vec.begin() + 2;
		vec.insert(it, 3, -50);
		vec.insert(vec.begin(), 0, -2);
		vec.insert(vec.end(), 3, -2);
		vec.insert(vec.begin(), 1, -1);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
	}
}
