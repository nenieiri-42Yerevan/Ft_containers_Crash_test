/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example61.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:22:43 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:28:31 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 61 */
/* swap() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example61(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;
		NS::vector<int>		tmp(5000000, 5);
		NS::vector<int>		tmp2(10000000, 10);
		NS::vector<int>		tmp3(15000000, 15);
		NS::vector<int>		tmp4(30000000, 30);

		_vector.assign(11000000, 11);

		start = clock();
		ss << " " << (_vector[2]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		long *adr1 = reinterpret_cast<long *>(&_vector);
		long *adr2 = reinterpret_cast<long *>(&tmp);
		_vector.swap(tmp);
		if (reinterpret_cast<long *>(&_vector) == adr1 && \
				reinterpret_cast<long *>(&tmp) == adr2)
			ss << " " << 1;

		ss << " " << (_vector[2]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());
		_vector.swap(tmp3);
		ss << " " << (_vector[2]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());
		NS::swap(_vector, tmp2);
		ss << " " << (_vector[2]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());
		NS::swap(_vector, tmp4);
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector[2]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
