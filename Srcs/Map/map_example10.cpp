/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example10.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:28:03 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 16:28:14 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 10 */
/* Example for key and value compare */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example10()
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('x', 1001));
		A.insert(NS::make_pair('y', 2002));
		A.insert(NS::make_pair('z', 3003));
		NS::pair<char, int> highest = *(A.rbegin());
		NS::map<char, int>::iterator	it = A.begin();
		ss << COLOR_YELLOW_B;
		do
		{
			ss << " " << it->first << " " << it->second;
		} while (A.value_comp()(*it++, highest));
		NS::map<char, int>::value_compare	cmp = A.value_comp();
		ss << " " << cmp(*A.begin(), *A.begin());
		ss << " " << cmp(*A.begin(), *(++A.begin()));
		NS::map<char, int>::key_compare	key_cmp = A.key_comp();
		ss << " " << key_cmp('a', 'b');
		ss << " " << key_cmp('a', 'a');
		return (ss.str());
	}
}
