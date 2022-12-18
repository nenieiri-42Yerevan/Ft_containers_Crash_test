/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_exmaple4.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:53:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:18:37 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 4 */
/* empty() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example4(double &_time)
	{
		std::ostringstream	ss;
		clock_t			  	start;
		clock_t			  	end;
		NS::stack<int>		stk;

		for (int i = 0; i < 2000000; ++i)
			stk.push(i);
		ss << " " << stk.empty();
		while (stk.size() > 0)
			stk.pop();

		start = clock();
		ss << " " << stk.empty();
		end = clock();
		_time = (double)(end - start);

		return (ss.str());
	}
}
