/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example64.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:55:22 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 15:58:36 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 64 */
/* at const */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example64(double &_time)
	{
		std::ostringstream	ss;

		NS::vector<int> vct(7);

		for (unsigned long int i = 0; i < vct.size(); ++i)
		{
			vct.at(i) = (vct.size() - i) * 3;
			ss << " " << vct[i];
		}
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		NS::vector<int> const vct_c(vct);

		ss << " " << vct.front() << " " << vct_c.front();
		ss << " " << vct.back() << " " <<  vct_c.back();

		for (unsigned long int i = 0; i < vct_c.size(); ++i)
			ss << " " << vct_c.at(i);
		try
		{
			ss << vct_c.at(10);
		}
		catch (const std::out_of_range &e)
		{
			ss << " nenie_iri";
		}
		catch (const std::exception &e)
		{
			ss << " ok " << e.what();
		}
		ss << " " << vct_c.size();
		ss << " " << vct_c.capacity();

		_time = 0;
		return (ss.str());
	}
}
