/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_example11.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:38:30 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 11 */
/* pop() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example11(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::stack<int>		stk;

		for (int i = 0; i < 2000000; ++i)
			stk.push(i);

		start = clock();
		while (stk.size() > 0)
			stk.pop();
		end = clock();
		_time = (double)(end - start);

		ss << " " << stk.size();

		return (ss.str());
	}
}
