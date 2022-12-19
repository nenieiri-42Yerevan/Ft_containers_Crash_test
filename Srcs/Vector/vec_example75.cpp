/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example75.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:45:17 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:48:28 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 75 */
/* rite2 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example75(double &_time)
	{
		std::ostringstream	ss;
		const int			size = 5;

		NS::vector<int> vct(size);
		NS::vector<int>::reverse_iterator it = vct.rbegin();
		NS::vector<int>::const_reverse_iterator ite = vct.rbegin();

		for (int i = 0; i < size; ++i)
			it[i] = (size - i) * 5;

		it = it + 5;
		it = 1 + it;
		it = it - 4;
		ss << " " << *(it += 2);
		ss << " " << *(it -= 1);

		*(it -= 2) = 42;
		*(it += 2) = 21;

		ss << " " << *(ite += 2) << " " << *(ite -= 2);

		ss << " " << (ite == it);
		ss << " " << (ite - it);
		ss << " " << (ite + 3 == it);

		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it5 = vct.begin();
		NS::vector<int>::const_iterator ite5 = vct.end();
		for (; it5 != ite5; ++it5)
			ss << " " << *it5;

		_time = 0;
		return (ss.str());
	}
}
