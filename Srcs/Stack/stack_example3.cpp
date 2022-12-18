/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_example3.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:12:33 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 3 */
/* constructor */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example3(double &_time)
	{
		std::ostringstream					ss;
		clock_t			  					start;
		clock_t			  					end;
		NS::stack<int, NS::vector<int> >	stk;
		NS::vector<int>						deque;

		for (int i = 0; i < 1000000; ++i)
			deque.push_back(i);
		for (int i = 1000000; i < 2000000; ++i)
			stk.push(i);

		start = clock();
		NS::stack<int, NS::vector<int> >	stack(deque);
		NS::stack<int, NS::vector<int> >	stack2(stk);
		NS::stack<int, NS::vector<int> >	stack3;
		stack3 = stack2;
		end = clock();
		_time = (double)(end - start);

		while (stack.size() > 0)
		{
			ss << " " << stack.top();
			stack.pop();
		}
		while (stack2.size() > 0)
		{
			ss << " " << stack2.top();
			stack2.pop();
		}

		return (ss.str());
	}
}
