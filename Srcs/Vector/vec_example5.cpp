/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:15:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:12:41 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 5 */
/* Example for data() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example5(double &_time)
	{
		std::ostringstream	ss;
		int					*p;

		NS::vector<int> vec(5, int(41));
		(ss << " ", ss << vec.capacity());
		(ss << " ", ss << vec.size());
		p = vec.data();
		(ss << " ", ss << p[0]);
		_time = 0;
		return (ss.str());
	}
}
