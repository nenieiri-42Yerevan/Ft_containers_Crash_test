/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:36:47 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 14:28:17 by vismaily         ###   ########.fr       */
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

	const std::string	vec_example24()
	{
		std::ostringstream	ss;

		NS::vector<NS_TEST::A> vec;
		for (size_t i = 0; i < 5; ++i)
			vec.push_back(A());
		vec.reserve(20);
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		return (ss.str());
	}
}
