/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example58.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:14:45 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:16:33 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 58 */
/* reserve() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example58(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		start = clock();
		_vector.reserve(99000000);
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
