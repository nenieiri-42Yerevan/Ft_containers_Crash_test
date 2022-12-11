/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:32:09 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:32:10 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 8 */
/* Example for iterators */

#include "test.hpp"

namespace	NS_TEST
{
	void	example8()
	{
		NS::vector<int> vec;
		NS::vector<int>::iterator	it;
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << ' ' << vec[i];
		it = vec.begin();
		std::cout << " " << *it;
		it = vec.begin() + 1;
		std::cout << " " << *it;
		it += 1;
		std::cout << " " << *it;
		std::cout << " " << *(it++);
		std::cout << " " << *(++it);
		it = vec.end() - 1;
		std::cout << " " << *it;
		it -= 2;
		std::cout << " " << *it;
		it += 1;
		std::cout << " " << *it;
		std::cout << " " << it[-1];
	}
}
