/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example30.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:04:23 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:08:50 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 30 */
/* at() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example30(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(99000000, 1);

		start = clock();
		ss << " " << _vector.at(3540000);
		end = clock();
		_time = (double)(end - start);

		ss << " " << _vector.size();
		ss << " " << _vector.capacity();

		return (ss.str());
	}
}
