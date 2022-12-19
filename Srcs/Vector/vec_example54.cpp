/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example54.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:57:52 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:03:18 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 54 */
/* pop_back() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example54(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(99000000, 1);

		start = clock();
		_vector.pop_back();
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector[_vector.size() - 1]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
