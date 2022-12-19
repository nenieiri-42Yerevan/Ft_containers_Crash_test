/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example70.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:08:05 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:22:16 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 70 */
/* ite_arrow */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example70(double &_time)
	{
		std::ostringstream	ss;
		const int			size = 5;

		NS::vector<int> vct(size);
		NS::vector<int>::iterator it(vct.begin());
		NS::vector<int>::const_iterator ite(vct.end());

		for (int i = 1; it != ite; ++i)
			*it++ = i;
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it5 = vct.begin();
		NS::vector<int>::const_iterator ite5 = vct.end();
		for (; it5 != ite5; ++it5)
			ss << " " << *it5;

		it = vct.begin();
		ite = vct.begin();

		ss << " " << *(++ite);
		ss << " " << *(ite++);
		ss << " " << *ite++;
		ss << " " << *++ite;

		ss << " " << *(++it);
		ss << " " << *(it++);
		ss << " " << *it++;
		ss << " " << *++it;

		ss << " " << *(--ite);
		ss << " " << *(ite--);
		ss << " " << *--ite;
		ss << " " << *ite--;

		ss << " " << *(--it);
		ss << " " << *(it--);
		ss << " " << *it--;
		ss << " " << *--it;

		_time = 0;
		return (ss.str());
	}
}
