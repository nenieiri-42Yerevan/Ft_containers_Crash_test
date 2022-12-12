/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:03:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:25:03 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 3 */
/* Example for const operator[] and for function at() with float */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example3()
	{
		std::ostringstream	ss;

		const NS::vector<float> vec(10, float(-60));
		(ss << " ", ss << vec.at(3));
		try
		{
			(ss << " ", ss << vec.at(13));
		}
		catch (const std::out_of_range &e)
		{
			ss << "OK";
		}
		return (ss.str());
	}
}
