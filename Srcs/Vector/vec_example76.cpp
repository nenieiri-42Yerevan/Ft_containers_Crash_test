/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example76.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:49:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:59:52 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 76 */
/* size */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example76(double &_time)
	{
		std::ostringstream	ss;
		const int			start_size = 7;

		NS::vector<int> vct(start_size, 20);
		NS::vector<int> vct2;
		NS::vector<int>::iterator it = vct.begin();

		for (int i = 2; i < start_size; ++i)
			it[i] = (start_size - i) * 3;
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it5 = vct.begin();
		NS::vector<int>::const_iterator ite5 = vct.end();
		for (; it5 != ite5; ++it5)
			ss << " " << *it5;

		vct.resize(10, 42);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it50 = vct.begin();
		NS::vector<int>::const_iterator ite50 = vct.end();
		for (; it50 != ite50; ++it50)
			ss << " " << *it50;

		vct.resize(18, 43);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it500 = vct.begin();
		NS::vector<int>::const_iterator ite500 = vct.end();
		for (; it500 != ite500; ++it500)
			ss << " " << *it500;

		vct.resize(10);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it51 = vct.begin();
		NS::vector<int>::const_iterator ite51 = vct.end();
		for (; it51 != ite51; ++it51)
			ss << " " << *it51;

		vct.resize(23, 44);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it52 = vct.begin();
		NS::vector<int>::const_iterator ite52 = vct.end();
		for (; it52 != ite52; ++it52)
			ss << " " << *it52;

		vct.resize(5);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it59 = vct.begin();
		NS::vector<int>::const_iterator ite59 = vct.end();
		for (; it59 != ite59; ++it59)
			ss << " " << *it59;

		vct.reserve(5);
		vct.reserve(3);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it58 = vct.begin();
		NS::vector<int>::const_iterator ite58 = vct.end();
		for (; it58 != ite58; ++it58)
			ss << " " << *it58;

		vct.resize(87);
		vct.resize(5);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it547 = vct.begin();
		NS::vector<int>::const_iterator ite547 = vct.end();
		for (; it547 != ite547; ++it547)
			ss << " " << *it547;

		ss << " " << vct2.empty();
		vct2 = vct;
		ss << " " << vct2.empty();

		vct.reserve(vct.capacity() + 1);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<int>::const_iterator it555 = vct.begin();
		NS::vector<int>::const_iterator ite555 = vct.end();
		for (; it555 != ite555; ++it555)
			ss << " " << *it555;

		_time = 0;
		return (ss.str());
	}
}
