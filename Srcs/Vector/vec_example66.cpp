/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example66.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:02:26 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 16:21:28 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 66 */
/* erase */

#include "test.hpp"

namespace	NS_TEST
{
	void	checkErase(NS::vector<std::string> const &vct, \
						NS::vector<std::string>::const_iterator const &it, \
						std::ostringstream &ss)
	{
		static int i = 0;
		ss << " " << i++ << " " << it - vct.begin();
		ss << " " << vct.size();
		ss << " " << vct.capacity();
	}

	const std::string	vec_example66(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<std::string> vct(10);

		for (unsigned long int i = 0; i < vct.size(); ++i)
			vct[i] = std::string((vct.size() - i), i + 65);
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		NS_TEST::checkErase(vct, vct.erase(vct.begin() + 2), ss);

		NS_TEST::checkErase(vct, vct.erase(vct.begin()), ss);
		NS_TEST::checkErase(vct, vct.erase(vct.end() - 1), ss);

		NS_TEST::checkErase(vct, vct.erase(vct.begin(), vct.begin() + 3), ss);
		NS_TEST::checkErase(vct, vct.erase(vct.end() - 3, vct.end() - 1), ss);

		vct.push_back("Hello");
		vct.push_back("Hi there");
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS_TEST::checkErase(vct, vct.erase(vct.end() - 3, vct.end()), ss);

		vct.push_back("ONE");
		vct.push_back("TWO");
		vct.push_back("THREE");
		vct.push_back("FOUR");
		ss << " " << vct.size();
		ss << " " << vct.capacity();
		NS_TEST::checkErase(vct, vct.erase(vct.begin(), vct.end()), ss);

		_time = 0;
		return (ss.str());
	}
}
