/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:21:49 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:32:20 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 7 */
/* Example for push_back() and pop_back() */
/* Example for clear() function */
/* Example for empty() function */

#include "test.hpp"

namespace	NS_TEST
{
	void	example7()
	{
		NS::vector<int> vec(5, (int)(42));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		vec.pop_back();
		vec.pop_back();
		std::cout << " " << vec.empty();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.clear();
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		std::cout << " " << vec.empty();
	}
}
