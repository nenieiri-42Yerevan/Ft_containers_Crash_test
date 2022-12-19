/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example46.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:04:44 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 14:07:08 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 46 */
/* max_size() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example46(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(1, 1);

		start = clock();
		ss << " " << (_vector.max_size());
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
