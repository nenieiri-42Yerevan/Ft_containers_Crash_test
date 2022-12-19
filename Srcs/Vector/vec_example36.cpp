/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example36.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:30:57 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:35:50 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 36 */
/* constructor */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example36(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		NS::vector<int>		tmp0(_vector);
		NS::vector<int>		tmp(10000000, 4);
		NS::vector<int>		tmp2(10000000, 5);

		tmp = tmp2;

		NS::vector<int>		tmp3(tmp);

		start = clock();
		NS::vector<int>		tmp4(tmp.begin(), tmp.end());
		end = clock();
		_time = (double)(end - start);

		ss << " " << (tmp4.size());
		ss << " " << (tmp4.capacity());
		ss << " " << (tmp[2]);
		ss << " " << (tmp3[2]);
		ss << " " << (tmp4[2]);

		try
		{
			NS::vector<int>	tmp5(-1, -1);
		}
		catch (const std::exception &e)
		{
			ss << " " << 1;
		}

		return (ss.str());
	}
}
