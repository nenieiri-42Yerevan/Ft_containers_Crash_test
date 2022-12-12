/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:10:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:25:14 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 4 */
/* Example for front() and back() functions */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example4()
	{
		std::ostringstream	ss;

		const NS::vector<int> vec(3, int(58));
		(ss << " ", ss << vec.capacity());
		(ss << " ", ss << vec.size());
		(ss << " ", ss << vec[0]);
		(ss << " ", ss << vec.front());
		(ss << " ", ss << vec[0]);
		(ss << " ", ss << vec.back());
		return (ss.str());
	}
}
