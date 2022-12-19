/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example45.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:57:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 14:03:52 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 45 */
/* iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example45(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		NS::vector<int>::iterator	it;
		for (int i = 0; i < 10; ++i)
			_vector.push_back(i);
		it = _vector.begin();

		start = clock();
		ss << " " << (*(++it));
		ss << " " << (*(--it));
		ss << " " << (*(it + 1));
		it += 1;
		ss << " " << (*(it - 1));
		it -= 1;
		ss << " " << (*it);
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
