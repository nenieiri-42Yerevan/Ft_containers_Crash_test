/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example39.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:43:23 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:45:00 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 39 */
/* end() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example39(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(10000000, 1);

		start = clock();
		ss << " " << (*(_vector.end() - 1));
		ss << " " << (*(_vector.end() - 2));
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
