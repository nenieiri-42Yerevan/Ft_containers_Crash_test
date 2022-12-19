/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example56.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:07:14 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:09:56 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 56 */
/* rbegin() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example56(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(10000000, 1);

		start = clock();
		ss << " " << (*_vector.rbegin());
		ss << " " << (*(_vector.rbegin() + 1));
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
