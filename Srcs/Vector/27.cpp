/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   27.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:37:51 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/11 15:38:04 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 27 */
/* Example tests insert(fill) */

#include "test.hpp"

namespace	NS_TEST
{
	void	example27()
	{
		NS::vector<int> vct;
		NS::vector<int> v;
		vct.assign(1000, 1);
		vct.insert(vct.end() - 50, 42000000, 2);
		v.push_back(vct.size());
		v.push_back(vct.capacity());
		for (NS::vector<int>::iterator first = v.begin(); first != v.end(); ++first)
			std::cout << " " << *first;
	}
}