/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_example14.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:49:53 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 14 */
/* top() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example14(double &_time)
	{
		std::ostringstream				ss;
		clock_t							start;
		clock_t							end;
		NS::stack<int, std::list<int> >	stk;

		for (int i = 0; i < 2000000; ++i)
			stk.push(i);

		start = clock();
		ss << " " << stk.top();
		end = clock();
		_time = (double)(end - start);

		stk.pop();
		ss << " " << stk.top();
		stk.push(7);
		ss << " " << stk.top();

		return (ss.str());
	}
}
