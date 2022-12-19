/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example29.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:57:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:02:51 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 29 */
/* assign(std iterators) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example29(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;
		std::vector<int>	tmp;

		_vector.assign(3, 3);
		tmp.assign(40000000, 1);

		start = clock();
		_vector.assign(tmp.begin(), tmp.end());
		end = clock();
		_time = (double)(end - start);

		for (size_t i = 0; i < tmp.size(); ++i)
			ss << " " << _vector[i];
		
		ss << " " << _vector.size();
		ss << " " << _vector.capacity();

		return (ss.str());
	}
}
