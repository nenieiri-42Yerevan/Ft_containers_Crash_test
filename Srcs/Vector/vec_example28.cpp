/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example28.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:29:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:02:34 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 28 */
/* assign() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example28(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;

		NS::vector<int>		_vector;
		NS::vector<int>		tmp;
		NS::vector<int>		tmp2;

		_vector.assign(3, 3);

		tmp.assign(40000000, 1);
		tmp2.assign(40000, 1);

		start = clock();

		_vector.assign(tmp.begin(), tmp.end());
		ss << " " << _vector[1];
		ss << " " << _vector.size();
		ss << " " << _vector.capacity();
		_vector.assign(tmp2.begin(), tmp2.end());

		end = clock();
		_time = (double)(end - start);

		ss << " " << _vector[444];
		ss << " " << _vector.size();
		ss << " " << _vector.capacity();
		return (ss.str());
	}
}
