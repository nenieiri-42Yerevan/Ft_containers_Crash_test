/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example69.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:45:15 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:48:28 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 69 */
/* ite */

#include "test.hpp"

namespace	NS_TEST
{
	void	prepost_incdec(NS::vector<int> &vct, std::ostringstream &ss)
	{
		NS::vector<int>::iterator it = vct.begin();
		NS::vector<int>::iterator it_tmp;

		it_tmp = ++it;
		ss << " " << *it_tmp;

		it_tmp = --it;
		ss << " "  << *it_tmp;

		it_tmp = it++;
		ss << " "  << *it_tmp;

		it_tmp = it--;
		ss << " " << *it_tmp;
	}

	const std::string	vec_example69(double &_time)
	{
		std::ostringstream	ss;
		const int 			size = 5;

		NS::vector<int> vct(size);
		NS::vector<int>::iterator it = vct.begin();
		NS::vector<int>::const_iterator ite = vct.begin();

		for (int i = 0; i < size; ++i)
			it[i] = (size - i) * 5;
		NS_TEST::prepost_incdec(vct, ss);

		it = it + 5;
		it = 1 + it;
		it = it - 4;
		ss << " " << *(it += 2);
		ss << " " << *(it -= 1);

		*(it -= 2) = 42;
		*(it += 2) = 21;

		ss << " " << *(ite += 2) << std::endl;
		ss << " " << *(ite -= 2) << std::endl;

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
