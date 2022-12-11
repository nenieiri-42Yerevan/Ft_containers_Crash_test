/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:15:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:32:41 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 5 */
/* Example for data() */

#include "test.hpp"

namespace	NS_TEST
{
	void	example5()
	{
		int	*p;

		NS::vector<int> vec(5, int(41));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		p = vec.data();
		std::cout << " " << p[0];
	}
}
