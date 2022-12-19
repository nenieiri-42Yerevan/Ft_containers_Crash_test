/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example60.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:20:40 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:21:59 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 60 */
/* size() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example60(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(12000000, 1);

		start = clock();
		ss << " " << (_vector.size());
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
