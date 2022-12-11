/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:33:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:33:46 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 15 */
/* Example for erase */

#include "test.hpp"

namespace	NS_TEST
{
	void	example15()
	{
		NS::vector<int> vec;
		for (size_t i = 0; i < 9; ++i)
			vec.push_back(i);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		NS::vector<int>::iterator it;
		it = vec.erase(vec.begin() + 1);
		std::cout << " " << *it;
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		it = vec.erase(vec.begin() + 2, vec.end() - 2);
		std::cout << " " << *it;
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		it = vec.erase(vec.begin(), vec.begin() + 1);
		std::cout << " " << *it;
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		it = vec.erase(vec.begin(), vec.begin());
		std::cout << " " << *it;
		it = vec.erase(vec.end() - 2, vec.end() - 1);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << *it;
		it = vec.erase(vec.begin(), vec.end());
		std::cout << " " << *it;
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
	}
}
