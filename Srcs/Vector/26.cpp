/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   26.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:37:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:37:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 26 */
/* Example tests for copy-constructor */

#include "test.hpp"

namespace	NS_TEST
{
	void	example26()
	{
		NS::vector<int> vct(5);
		NS::vector<int>::iterator	it = vct.begin();
		NS::vector<int>::iterator	ite = vct.end();
		std::cout << " " << (ite - it);
		for (; it != ite; ++it)
			*it = (ite - it);
		it = vct.begin();
		NS::vector<int> vct_range(it, --(--ite));
		for (int i = 0; it != ite; ++it)
			*it = ++i * 5;
		it = vct.begin();
		NS::vector<int> vct_copy(vct);
		for (int i = 0; it != ite; ++it)
			*it = ++i * 7;
		vct_copy.push_back(42);
		vct_copy.push_back(21);
		std::cout << " " << vct.size();
		std::cout << " " << vct_range.size();
		std::cout << " " << vct_copy.size();
		vct = vct_copy;
		vct_copy = vct_range;
		vct_range.clear();
		it = vct.begin();
		for (; it != vct.end(); ++it)
			std::cout << " " << *it;
		it = vct_range.begin();
		for (; it != vct_range.end(); ++it)
			std::cout << " " << *it;
		it = vct_copy.begin();
		for (; it != vct_copy.end(); ++it)
			std::cout << " " << *it;
		std::cout << " " << vct.size();
		std::cout << " " << vct_range.size();
		std::cout << " " << vct_copy.size();
	}
}
