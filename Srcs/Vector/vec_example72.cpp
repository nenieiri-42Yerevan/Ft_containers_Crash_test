/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example72.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:45 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:38:08 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 72 */
/* relational_ope */

#include "test.hpp"

namespace	NS_TEST
{
	void	cmp(const NS::vector<int> &lhs, const NS::vector<int> &rhs, \
					std::ostringstream &ss)
	{
		static int i = 0;

		ss << " " << i++;
		ss << " " << (lhs == rhs) << " " << (lhs != rhs);
		ss << " " << (lhs <  rhs) << " " << (lhs <= rhs);
		ss << " " << (lhs >  rhs) << " " << (lhs >= rhs);
	}

	const std::string	vec_example72(double &_time)
	{
		std::ostringstream	ss;
		NS::vector<int>		vct(4);
		NS::vector<int>		vct2(4);

		NS_TEST::cmp(vct, vct, ss);  // 0
		NS_TEST::cmp(vct, vct2, ss); // 1

		vct2.resize(10);

		NS_TEST::cmp(vct, vct2, ss); // 2
		NS_TEST::cmp(vct2, vct, ss); // 3

		vct[2] = 42;

		NS_TEST::cmp(vct, vct2, ss); // 4
		NS_TEST::cmp(vct2, vct, ss); // 5

		swap(vct, vct2);

		NS_TEST::cmp(vct, vct2, ss); // 6
		NS_TEST::cmp(vct2, vct, ss); // 7

		_time = 0;
		return (ss.str());
	}
}
