/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:10:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:32:55 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 4 */
/* Example for front() and back() functions */

#include "test.hpp"

namespace	NS_TEST
{
	void	example4()
	{
		const NS::vector<int> vec(3, int(58));
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		std::cout << " " << vec[0];
		std::cout << " " << vec.front();
		std::cout << " " << vec[0];
		std::cout << " " << vec.back();
	}
}
