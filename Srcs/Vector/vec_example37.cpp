/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example37.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:38:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 12:40:25 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 37 */
/* data() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example37(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		std::ostringstream	oss;

		start = clock();
		oss << &*(_vector.data());
		end = clock();
		_time = (double)(end - start);

		std::string			str = oss.str();

		if (!oss.str().rfind("0x", 0))
			ss << " " << 1;

		return (ss.str());
	}
}
