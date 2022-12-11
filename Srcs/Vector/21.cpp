/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:35:40 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:35:54 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 21 */
/* Example for relational operators */

#include "test.hpp"

namespace	NS_TEST
{
	void	example21()
	{
		NS::vector<char> vec1;
		NS::vector<char> vec2;
		vec1.push_back('h');
		vec1.push_back('e');
		vec1.push_back('l');
		vec1.push_back('l');
		vec1.push_back('o');
		vec2.push_back('h');
		vec2.push_back('e');
		vec2.push_back('l');
		vec2.push_back('l');
		vec2.push_back('o');
		for (size_t i = 0; i < vec1.size(); ++i)
			std::cout << vec1[i];
		for (size_t i = 0; i < vec2.size(); ++i)
			std::cout << vec2[i];
		std::cout << " " << (vec1 == vec2);
		std::cout << " " << (vec1 != vec2);
		std::cout << " " << (vec1 < vec2);
		std::cout << " " << (vec1 <= vec2);
		std::cout << " " << (vec1 > vec2);
		std::cout << " " << (vec1 >= vec2);
		vec2.push_back('o');
		std::cout << " " << (vec1 == vec2);
		std::cout << " " << (vec1 != vec2);
		std::cout << " " << (vec1 < vec2);
		std::cout << " " << (vec1 <= vec2);
		std::cout << " " << (vec1 > vec2);
		std::cout << " " << (vec1 >= vec2);
		vec1.push_back('o');
		vec1.push_back('o');
		std::cout << " " << (vec1 == vec2);
		std::cout << " " << (vec1 != vec2);
		std::cout << " " << (vec1 < vec2);
		std::cout << " " << (vec1 <= vec2);
		std::cout << " " << (vec1 > vec2);
		std::cout << " " << (vec1 >= vec2);
		vec1.pop_back();
		vec1.erase(vec1.begin() + 1);
		vec1.insert(vec1.begin() + 1, 'E');
		for (size_t i = 0; i < vec1.size(); ++i)
			std::cout << vec1[i];
		for (size_t i = 0; i < vec2.size(); ++i)
			std::cout << vec2[i];
		std::cout << " " << (vec1 == vec2);
		std::cout << " " << (vec1 != vec2);
		std::cout << " " << (vec1 < vec2);
		std::cout << " " << (vec1 <= vec2);
		std::cout << " " << (vec1 > vec2);
		std::cout << " " << (vec1 >= vec2);
	}
}
