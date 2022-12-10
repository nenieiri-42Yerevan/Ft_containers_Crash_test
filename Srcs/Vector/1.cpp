/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:40:01 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/10 17:52:26 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 1 */
/* Example for constructor without parametrs */
/* Example for size and capacity with int */
/* Example for push_back */

#include "test.hpp"

namespace	NS_TEST
{
	void	example1()
	{
		NS::vector<int>	vec;
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.push_back(42);
		std::cout << " " << vec[0];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.push_back(84);
		std::cout << " " << vec[1];
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.push_back(168);
		std::cout << " " << vec.at(2);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.push_back(336);
		vec.push_back(672);
		std::cout << " " << vec.at(3);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size() << '.';
	}
}
