/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:32:09 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:13:58 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 8 */
/* Example for iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example8(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<int> vec;
		NS::vector<int>::iterator	it;
		for (size_t i = 50; i < 55; ++i)
			vec.push_back(i);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		it = vec.begin();
		ss << " " << *it;
		it = vec.begin() + 1;
		ss << " " << *it;
		it += 1;
		ss << " " << *it;
		ss << " " << *(it++);
		ss << " " << *(++it);
		it = vec.end() - 1;
		ss << " " << *it;
		it -= 2;
		ss << " " << *it;
		it += 1;
		ss << " " << *it;
		ss << " " << it[-1];
		_time = 0;
		return (ss.str());
	}
}
