/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example62.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:29:29 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:47:34 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 62 */
/* assign */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example62(double &_time)
	{
		std::ostringstream	ss;
		NS::vector<int>		vct(7);
		NS::vector<int> 	vct_two(4);
		NS::vector<int> 	vct_three;
		NS::vector<int> 	vct_four;

		for (unsigned long int i = 0; i < vct.size(); ++i)
			vct[i] = (vct.size() - i) * 3;
		for (unsigned long int i = 0; i < vct_two.size(); ++i)
			vct_two[i] = (vct_two.size() - i) * 5;

		ss << " " << vct.size();
		ss << " " << vct.capacity();
		ss << " " << vct_two.size();
		ss << " " << vct_two.capacity();

		vct_three.assign(vct.begin(), vct.end());
		vct.assign(vct_two.begin(), vct_two.end());
		vct_two.assign(2, 42);
		vct_four.assign(4, 21);

		ss << " " << vct.size();
		ss << " " << vct.capacity();
		ss << " " << vct_two.size();
		ss << " " << vct_two.capacity();
		ss << " " << vct_three.size();
		ss << " " << vct_three.capacity();
		ss << " " << vct_four.size();
		ss << " " << vct_four.capacity();

		vct_four.assign(6, 84);
		ss << " " << vct_four.size();
		ss << " " << vct_four.capacity();

		vct.assign(5, 53);
		vct_two.assign(vct_three.begin(), vct_three.begin() + 3);

		ss << " " << vct.size();
		ss << " " << vct.capacity();
		ss << " " << vct_two.size();
		ss << " " << vct_two.capacity();

		_time = 0;
		return (ss.str());
	}
}
