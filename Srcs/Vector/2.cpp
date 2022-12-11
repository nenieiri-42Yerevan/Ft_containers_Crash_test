/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:55:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:33:13 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 2 */
/* Example for constructor with 2 parametrs with double */
/* Example for operator[] */

#include "test.hpp"

namespace	NS_TEST
{
	void	example2()
	{
		NS::vector<double> vec(3, double(58));
		std::cout << std::fixed << std::setprecision(2);
		std::cout << " " << vec.capacity();
		std::cout << " " << vec.size();
		std::cout << " " << vec[2];
	}
}
