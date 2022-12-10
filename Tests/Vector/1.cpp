/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:40:01 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/10 16:48:04 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

namespace	NS_TEST
{
	void	example1()
	{
		/* Example 1 */
		/* Example for constructor without parametrs */
		/* Example for size and capacity with int */
		/* Example for push_back */

		NS::vector<int>	vec;
		std::cout << "std::vector -> capacity: " << vec.capacity();
		std::cout << ", size: " << vec.size();
		vec.push_back(42);
		std::cout << ", push_back[42] value[0]: " << vec[0];
		std::cout << ", capacity: " << vec.capacity();
		std::cout << ", size: " << vec.size();
		vec.push_back(84);
		std::cout << ", push_back[84] value[1]: " << vec[1];
		std::cout << ", capacity: " << vec.capacity();
		std::cout << ", size: " << vec.size();
		vec.push_back(168);
		std::cout << ", push_back[168] value[2]: " << vec.at(2);
		std::cout << ", capacity: " << vec.capacity();
		std::cout << ", size: " << vec.size();
		vec.push_back(336);
		vec.push_back(672);
		std::cout << ", push_back[336],[672] value[3]: " << vec.at(3);
		std::cout << ", capacity: " << vec.capacity();
		std::cout << ", size: " << vec.size() << '.';
	}
}
