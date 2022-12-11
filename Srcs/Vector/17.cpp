/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:18 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:34:26 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 17 */
/* Example for assign */

#include "test.hpp"

namespace	NS_TEST
{
	void	example17()
	{
		NS::vector<int> vec(5, int(42));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.assign(11, 48);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.assign(3, 21);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.assign(0, 2);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
	}
}
