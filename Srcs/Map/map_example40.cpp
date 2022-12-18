/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example40.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 13:16:43 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 40 */
/* max_size() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example40(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::map<int, int>	mp;

		std::map<int, int>	std_mp;

		start = clock();
		if ((std_mp.max_size() / 2) < mp.max_size())
			ss << " " << 1;
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
