/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example34.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:18:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:22:46 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 34 */
/* clear() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example34(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(50000000, 1);

		start = clock();
		_vector.clear();
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector.capacity());
		ss << " " << (_vector.size());

		return (ss.str());
	}
}
