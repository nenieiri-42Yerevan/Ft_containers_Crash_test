/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example40.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:46:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:49:41 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 40 */
/* erase(range) */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example40(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		for (int i = 0; i < 99000000; ++i)
			_vector.push_back(i);

		start = clock();
    	ss << " " << (*(_vector.erase(_vector.begin() + 80000, _vector.end() - 15000000)));
		end = clock();
		_time = (double)(end - start);

		ss << " " << (*(_vector.begin() + 820000));
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		return (ss.str());
	}
}
