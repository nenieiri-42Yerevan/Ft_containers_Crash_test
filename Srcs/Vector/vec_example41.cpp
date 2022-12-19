/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example41.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:51:09 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 13:02:37 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 41 */
/* front() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example41(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(44444, 1);

		start = clock();
		ss << " " << (_vector.front());
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
