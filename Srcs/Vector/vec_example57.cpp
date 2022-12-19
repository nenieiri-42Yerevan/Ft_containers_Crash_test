/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example57.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:10:49 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:12:43 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 57 */
/* rend() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example57(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(10000000, 1);

		start = clock();
		ss << " " << (*(_vector.rend() - 1));
		ss << " " << (*(_vector.rend() - 2));
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
