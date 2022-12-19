/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example38.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:41:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:42:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 38 */
/* empty() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example38(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(10000000, 1);

		start = clock();
		ss << " " << (_vector.empty());
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
