/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example65.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:59:18 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 16:02:02 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 65 */
/* bidirect it */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example65(double &_time)
	{
		std::ostringstream	ss;

		std::list<int> lst;
		std::list<int>::iterator lst_it;
		for (int i = 1; i < 5; ++i)
			lst.push_back(i * 3);

		NS::vector<int> vct(lst.begin(), lst.end());
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		lst_it = lst.begin();
		for (int i = 1; lst_it != lst.end(); ++i)
			*lst_it++ = i * 5;
		vct.assign(lst.begin(), lst.end());
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		vct.insert(vct.end(), lst.rbegin(), lst.rend());
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		_time = 0;
		return (ss.str());
	}
}
