/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_example13.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:44:37 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 13 */
/* size() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example13(double &_time)
	{
		std::ostringstream					ss;
		clock_t								start;
		clock_t								end;
		NS::stack<int, std::deque<int> >	stk;

		for (int i = 0; i < 2000000; ++i)
			stk.push(i);

		start = clock();
		ss << " " << stk.size();
		end = clock();
		_time = (double)(end - start);

		stk.pop();
		ss << " " << stk.size();
		stk.push(7);
		ss << " " << stk.size();

		return (ss.str());
	}
}
