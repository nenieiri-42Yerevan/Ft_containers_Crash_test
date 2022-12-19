/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example71.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:23:05 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 17:31:50 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 71 */
/* ite_n0 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example71(double &_time)
	{
		std::ostringstream					ss;
		NS::vector<std::string>				vct(8);
		NS::vector<std::string>				vct2;
		NS::vector<std::string>::iterator	it = vct.begin();

		for (unsigned long int i = 0; i < vct.size(); ++i)
			it[i] = std::string((vct.size() - i), i + 65);
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS::vector<std::string>::const_iterator it5 = vct.begin();
		NS::vector<std::string>::const_iterator ite5 = vct.end();
		for (; it5 != ite5; ++it5)
			ss << " " << *it5;

		vct.push_back("One long string");
		vct2.push_back("Another long string");

		ss << " " << vct.size();
		ss << " " << vct.capacity();
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		vct.pop_back();
		vct2.pop_back();

		ss << " " << vct.size();
		ss << " " << vct.capacity();
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		_time = 0;
		return (ss.str());
	}
}
