/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example43.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:49:28 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 13:52:20 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 43 */
/* insert(std iterators) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example43(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		std::vector<int>	tmp;
		tmp.assign(26000000, 1);
		_vector.assign(42000000, 7);

		start = clock();
		_vector.insert(_vector.begin(), tmp.begin(), tmp.end());
		end = clock();
		_time = (double)(end - start);

		for (size_t i = 0; i < tmp.size(); ++i)
			ss << " " << (_vector[i]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
