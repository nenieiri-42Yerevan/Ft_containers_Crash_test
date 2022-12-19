/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example68.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:25:21 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 16:27:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 68 */
/* insert2 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example68(double &_time)
	{
		std::ostringstream	ss;
		NS::vector<int>		vct(5);
		NS::vector<int>		vct2;
		const int			cut = 3;

		for (unsigned long int i = 0; i < vct.size(); ++i)
			vct[i] = (vct.size() - i) * 7;
		ss << " " << vct.size();
		ss << " " << vct.capacity();

		vct2.insert(vct2.begin(), vct.begin(), vct.begin() + cut);
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();
		vct2.insert(vct2.begin(), vct.begin() + cut, vct.end());
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();
		vct2.insert(vct2.end(), vct.begin(), vct.begin() + cut);
		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		ss << " " << *vct2.insert(vct2.end(), 42);
		ss << " " << *vct2.insert(vct2.begin() + 5, 84);

		ss << " " << vct2.size();
		ss << " " << vct2.capacity();

		_time = 0;
		return (ss.str());
	}
}
