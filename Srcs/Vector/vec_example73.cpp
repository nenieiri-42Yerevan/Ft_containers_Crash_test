/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example73.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:38:48 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:40:48 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 73 */
/* rev_ite_construct */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example73(double &_time)
	{
		std::ostringstream	ss;
		NS::vector<int>		vct;

		NS::vector<int>::iterator				it = vct.begin();
		NS::vector<int>::const_iterator			cit = vct.begin();
		NS::vector<int>::reverse_iterator		rit(it);
		NS::vector<int>::const_reverse_iterator	crit(rit);
		NS::vector<int>::const_reverse_iterator	crit_(it);
		NS::vector<int>::const_reverse_iterator	crit_2(cit);

		_time = 0;
		return (ss.str());
	}
}
