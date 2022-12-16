/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example11.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:28:23 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:28:06 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 11 */
/* Example for get_allocator */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example11(double &_time)
	{
		std::ostringstream	ss;

		NS::map<char, int>			A;
		NS::pair<const char, int>	*p;
		p = A.get_allocator().allocate(42);
		A.get_allocator().deallocate(p, 42);
		_time = 0;
		return (ss.str());
	}
}
