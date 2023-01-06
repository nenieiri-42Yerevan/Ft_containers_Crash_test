/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example24.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:47 by vismaily          #+#    #+#             */
/*   Updated: 2023/01/06 18:56:57 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 24 */
/* Example for & and address */

#include "test.hpp"

static std::ostringstream sss;

namespace	NS_TEST
{
	struct	A
	{
		A* operator &() const
		{
			sss << " error";
			return (0);
		}
	};

	const std::string	vec_example24(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<NS_TEST::A> vec;
		for (size_t i = 0; i < 5; ++i)
			vec.push_back(A());
		vec.reserve(20);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		_time = 0;
		ss << sss.str();
		return (ss.str());
	}
}
