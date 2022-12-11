/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:21:49 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:32:28 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 6 */
/* Example for max_size() and get_allocator() */

#include "test.hpp"

namespace	NS_TEST
{
	void	example6()
	{
		long double	*p;

		NS::vector<long double> vec(5, (long double)(41));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		vec.max_size();
		p = vec.get_allocator().allocate(3);
		for (int i = 0; i < 3; ++i)
			vec.get_allocator().construct(&p[i], i);
		for (int i = 0; i < 3; ++i)
		{
			std::cout << ' ' << p[i];
			vec.get_allocator().destroy(&p[i]);
		}
		vec.get_allocator().deallocate(p, 3);
	}
}
