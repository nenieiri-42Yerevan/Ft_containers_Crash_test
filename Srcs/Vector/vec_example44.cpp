/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example44.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:53:50 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 13:56:30 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 44 */
/* insert(value) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example44(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		_vector.assign(26000000, 1);

		start = clock();
		ss << " " << (*(_vector.insert(_vector.end() - 8000000, 44)));
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
