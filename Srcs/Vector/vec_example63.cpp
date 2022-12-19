/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example63.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:48:45 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:53:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 63 */
/* at */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example63(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<int> vct(7);

		for (unsigned long int i = 0; i < vct.size(); ++i)
		{
			vct.at(i) = (vct.size() - i) * 3;
			ss << " " << vct.at(i);
			ss << " " << vct[i];
		}
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		NS::vector<int> const vct_c(vct);

		ss << " " << vct.front() << " " << vct_c.front();
		ss << " " << vct.back() << " " <<  vct_c.back();

		try
		{
			vct.at(10) = 42;
		}
		catch (const std::out_of_range &e)
		{
			ss << " nenie_iri";
		}
		catch (const std::exception &e)
		{
			ss << " " << e.what();
		}

		_time = 0;
		return (ss.str());
	}
}
