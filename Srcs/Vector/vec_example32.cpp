/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example32.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:13:38 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:15:41 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 32 */
/* begin() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example32(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(1000, 1);

		start = clock();
		ss << " " << (*_vector.begin());
		ss << " " << (*++_vector.begin());
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
