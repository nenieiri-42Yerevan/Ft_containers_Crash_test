/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example53.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:55:17 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:01:03 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 53 */
/* operator [] */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example53(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(444440000, 1);

		start = clock();
		ss << " " << (_vector[55550000]);
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		_time = 0;
		return (ss.str());
	}
}
