/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:47 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:20:02 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 24 */
/* Example for & and address */

#include "test.hpp"

namespace	NS_TEST
{
	struct	A
	{
		A* operator &() const
		{
			std::cout << "error ";
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
		return (ss.str());
	}
}
