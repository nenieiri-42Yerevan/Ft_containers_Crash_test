/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example55.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:04:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:06:19 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 55 */
/* push_back() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example55(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		start = clock();
		for (int i = 0; i < 55000000; ++i)
			_vector.push_back(i);
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
