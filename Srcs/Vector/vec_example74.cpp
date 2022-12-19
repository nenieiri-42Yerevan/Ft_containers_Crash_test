/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example74.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:41:29 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:46:29 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 74 */
/* rite */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example74(double &_time)
	{
		std::ostringstream	ss;
		const int			size = 5;

		NS::vector<int> vct(size);
		NS::vector<int>::iterator it_ = vct.begin();
		NS::vector<int>::reverse_iterator it(it_);

		for (int i = 0; i < size; ++i)
			vct[i] = (i + 1) * 5;
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		ss << " " << (it_ == it.base());
		ss << " " << (it_ == (it + 3).base());

		ss << " " << *(it.base() + 1);
		ss << " " << *(it - 3);
		ss << " " << *(it - 3).base();
		it -= 3;
		ss << " " << *it.base();

		ss << " " << *(it);
		ss << " " << *(it).base();
		ss << " " << *(it - 0);
		ss << " " << *(it - 0).base();
		ss << " " << *(it - 1).base();

		_time = 0;
		return (ss.str());
	}
}
