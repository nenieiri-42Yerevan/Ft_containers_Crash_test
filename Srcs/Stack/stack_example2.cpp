/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_exmaple2.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:53:55 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 15:08:24 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 2 */
/* Example for deque */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	stack_example2()
	{
		std::ostringstream	ss;

		NS::stack<int, std::deque<int> >	st;
		ss << " " << st.size();
		st.push(42);
		ss << " " << st.top() << " " << st.size();
		st.push(84);
		ss << " " << st.top() << " " << st.size();
		st.push(168);
		ss << " " << st.top() << " " << st.size();
		st.push(336);
		st.push(672);
		ss << " " << st.top();
		st.pop();
		ss << " " << st.top() << " " << st.empty();
		NS::stack<int, std::deque<int> >	st2;
		ss << " " << (st == st2);
		ss << " " << (st != st2);
		ss << " " << (st > st2);
		ss << " " << (st >= st2);
		ss << " " << (st < st2);
		ss << " " << (st <= st2);
		st2.push(42);
		st2.push(84);
		st2.push(168);
		st2.push(336);
		ss << " " << (st == st2);
		ss << " " << (st != st2);
		ss << " " << (st > st2);
		ss << " " << (st >= st2);
		ss << " " << (st < st2);
		ss << " " << (st <= st2);
		ss << " " << st.size();
		st2.pop();
		st2 = st;
		ss << " " << st2.top() << " " << st2.size();
		return (ss.str());
	}
}
