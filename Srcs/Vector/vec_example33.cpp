/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example33.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:16:45 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:18:03 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 33 */
/* capacity() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example33(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(12000000, 1);

		start = clock();
		ss << " " << (_vector.capacity());
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
