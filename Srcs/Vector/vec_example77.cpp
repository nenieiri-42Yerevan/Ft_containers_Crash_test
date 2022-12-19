/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example77.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:01:38 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 18:07:07 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 77 */
/* ite */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example77(double &_time)
	{
		std::ostringstream	ss;
		NS::vector<int>		foo(3, 15);
		NS::vector<int>		bar(5, 42);
		
		NS::vector<int>::const_iterator it_foo = foo.begin();
		NS::vector<int>::const_iterator it_bar = bar.begin();

		ss << " " << foo.size();
		ss << " " << foo.capacity();
		ss << " " << bar.size();
		ss << " " << bar.capacity();

		foo.swap(bar);

		ss << " " << foo.size();
		ss << " " << foo.capacity();
		ss << " " << bar.size();
		ss << " " << bar.capacity();

		ss << " " << (it_foo == bar.begin());
		ss << " " << (it_bar == foo.begin());

		_time = 0;
		return (ss.str());
	}
}
