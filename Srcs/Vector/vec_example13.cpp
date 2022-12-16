/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:00:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:16:10 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 13 */
/* Example for insert part 2 */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example13(double &_time)
	{
		std::ostringstream	ss;
	
		NS::vector<int> vec(5, int(58));
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		NS::vector<int>::iterator it = vec.begin() + 2;
		vec.insert(it, 1);
		it = vec.insert(vec.begin(), 1);
		vec.insert(vec.end(), 1);
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		ss << " " << *it;
		vec.reserve(30);
		it = vec.begin() + 2;
		for (size_t i = 0; i < vec.size(); ++i)
			ss << ' ' << vec[i];
		ss << " " << vec.capacity();
		ss << " " << vec.size();
		NS::vector<int> vec5;
		vec5.insert(vec5.begin(), 9);
		vec5.insert(vec5.end() - 1, 3, 10);
		for (size_t i = 0; i < vec5.size(); ++i)
			ss << ' ' << vec5[i];
		ss << " " << vec5.capacity();
		ss << " " << vec5.size();
		_time = 0;
		return (ss.str());
	}
}
