/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example35.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:23:56 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:28:29 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 35 */
/* constructor(std iterators) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example35(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector(3, 3);

		std::vector<int>	tmp(10000000, 4);

		start = clock();
		NS::vector<int>		tmp2(tmp.begin(), tmp.end());
		end = clock();
		_time = (double)(end - start);

		ss << " " << (tmp2.size());
		ss << " " << (tmp2.capacity());

		for (size_t i = 0; i < tmp.size(); ++i)
			ss << " " << (tmp2[i]);

		return (ss.str());
	}
}
