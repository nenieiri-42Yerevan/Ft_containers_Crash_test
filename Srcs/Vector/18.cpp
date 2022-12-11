/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:34:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:34:47 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 18 */
/* Example for assign part 2 */

#include "test.hpp"

namespace	NS_TEST
{
	void	example18()
	{
		NS::vector<int> vec(5, int(42));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		NS::vector<int> vec2(2, int(21));
		vec.assign(vec2.begin(), vec2.end());
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec2.assign(11, 42);
		vec.assign(vec2.begin(), vec2.end());
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		vec.assign(vec2.begin(), vec2.begin());
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
	}
}
