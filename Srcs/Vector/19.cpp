/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:56 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:35:02 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 19 */
/* Example for swaps */

#include "test.hpp"

namespace	NS_TEST
{
	void	example19()
	{
		NS::vector<int> vec(3, int(42));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		NS::vector<int> vec2(9, int(21));
		std::cout << " " << vec2.capacity();
		std::cout << " " << vec2.size();
		for (size_t i = 0; i < vec2.size(); ++i)
			std::cout << ' ' << vec2[i];
		vec.swap(vec2);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		std::cout << " " << vec2.capacity();
		std::cout << " " << vec2.size();
		for (size_t i = 0; i < vec2.size(); ++i)
			std::cout << ' ' << vec2[i];
	}
}
