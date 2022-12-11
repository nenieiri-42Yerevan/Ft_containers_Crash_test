/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:03:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:33:05 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 3 */
/* Example for const operator[] and for function at() with float */

#include "test.hpp"

namespace	NS_TEST
{
	void	example3()
	{
		const NS::vector<float> vec(10, float(-60));
		std::cout << " " << vec.at(3);
		try
		{
			std::cout << " " << vec.at(13);
		}
		catch (const std::out_of_range &e)
		{
			std::cout << "OK";
		}
	}
}
