/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example67.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:22:05 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 16:24:38 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 67 */
/* insert */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example67(double &_time)
	{
		std::ostringstream	ss;
		NS::vector<int>		vct(10);
		NS::vector<int> 	vct2;
		NS::vector<int> 	vct3;

		for (unsigned long int i = 0; i < vct.size(); ++i)
			vct[i] = (vct.size() - i) * 3;
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		vct2.insert(vct2.end(), 42);
		vct2.insert(vct2.begin(), 2, 21);
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		vct2.insert(vct2.end() - 2, 42);
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		vct2.insert(vct2.end(), 2, 84);
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		vct2.resize(4);
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		vct2.insert(vct2.begin() + 2, vct.begin(), vct.end());
		vct.clear();
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		ss << " " << vct.size();
		ss << " " << vct.capacity();

		for (int i = 0; i < 5; ++i)
			vct3.insert(vct3.end(), i);
		vct3.insert(vct3.begin() + 1, 2, 111);
		ss << " " << vct3.size();
		ss << " " << vct3.capacity();

		_time = 0;
		return (ss.str());
	}
}
