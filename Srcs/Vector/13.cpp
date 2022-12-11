/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:00:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:31:05 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 13 */
/* Example for insert part 2 */

#include "test.hpp"

namespace	NS_TEST
{
	void	example13()
	{
		NS::vector<int> vec(5, int(58));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		NS::vector<int>::iterator it = vec.begin() + 2;
		vec.insert(it, 1);
		it = vec.insert(vec.begin(), 1);
		vec.insert(vec.end(), 1);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		std::cout << " " << *it;
		vec.reserve(30);
		it = vec.begin() + 2;
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		NS::vector<int> vec5;
		vec5.insert(vec5.begin(), 9);
		vec5.insert(vec5.end() - 1, 3, 10);
		for (size_t i = 0; i < vec5.size(); ++i)
			std::cout << ' ' << vec5[i];
		std::cout << " " << vec5.capacity();
		std::cout << " " << vec5.size();
	}
}
