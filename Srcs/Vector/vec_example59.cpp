/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example59.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:17:15 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:19:49 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 59 */
/* resize() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example59(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(99000000, 1);

		start = clock();

		_vector.resize(50000000);
		_vector.reserve(50000000);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());
		_vector.resize(70000000);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());
		_vector.resize(153000000, int());
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());
		ss << " " << (_vector[65]);

		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
