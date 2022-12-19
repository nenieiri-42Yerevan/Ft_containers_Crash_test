/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example26.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:37:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 18:35:38 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 26 */
/* Example tests for copy-constructor */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example26(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<int> vct(5);
		NS::vector<int>::iterator	it = vct.begin();
		NS::vector<int>::iterator	ite = vct.end();
		ss << " " << (ite - it);
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
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		ss << " " << vct_range.size();
		ss << " " << vct_copy.size();
		vct = vct_copy;
		vct_copy = vct_range;
		vct_range.clear();
		it = vct.begin();
		for (; it != vct.end(); ++it)
			ss << " " << *it;
		it = vct_range.begin();
		for (; it != vct_range.end(); ++it)
			ss << " " << *it;
		it = vct_copy.begin();
		for (; it != vct_copy.end(); ++it)
			ss << " " << *it;
		ss << " " << vct.size();
		ss << " " << vct_range.size();
		ss << " " << vct_copy.size();
		_time = 0;
		return (ss.str());
	}
}
