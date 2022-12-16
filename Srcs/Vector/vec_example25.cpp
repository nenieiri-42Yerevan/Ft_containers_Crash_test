/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:37:12 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:20:38 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 25 */
/* Example tests for insert2 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example25(double &_time)
	{
		std::ostringstream	ss;

		const int cut = 3;
		NS::vector<int> vct(5);
		NS::vector<int> vct2;
		for (unsigned long int i = 0; i < vct.size(); ++i)
			vct[i] = (vct.size() - i) * 7;
		for (unsigned long int i = 0; i < vct.size(); ++i)
			ss << " " << vct[i];
		vct2.insert(vct2.begin(), vct.begin(), vct.begin() + cut);
		for (unsigned long int i = 0; i < vct2.size(); ++i)
			ss << " " << vct2[i];
		vct2.insert(vct2.begin(), vct.begin() + cut, vct.end());
		for (unsigned long int i = 0; i < vct2.size(); ++i)
			ss << " " << vct2[i];
		vct2.insert(vct2.end(), vct.begin(), vct.begin() + cut);
		for (unsigned long int i = 0; i < vct2.size(); ++i)
			ss << " " << vct2[i];
		ss << " " << *vct2.insert(vct2.end(), 42) << " ";
		ss << *vct2.insert(vct2.begin() + 5, 84);
		for (unsigned long int i = 0; i < vct2.size(); ++i)
			ss << " " << vct2[i];
		_time = 0;
		return (ss.str());
	}
}
