/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:01 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:34:07 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 16 */
/* Example for resize */

#include "test.hpp"

namespace	NS_TEST
{
	void	example16()
	{
		NS::vector<int> vec(5, int(42));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.resize(7);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.resize(11, 21);
		vec.resize(11);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.resize(6);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
	}
}
