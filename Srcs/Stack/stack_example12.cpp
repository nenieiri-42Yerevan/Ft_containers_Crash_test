/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_example12.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:40:21 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 12 */
/* push() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example12(double &_time)
	{
		std::ostringstream					ss;
		clock_t								start;
		clock_t								end;
		NS::stack<int, NS::vector<int> >	stk;

		start = clock();
		for (int i = 0; i < 8000000; ++i)
			stk.push(i);
		end = clock();
		_time = (double)(end - start);

		ss << " " << stk.size();

		return (ss.str());
	}
}
