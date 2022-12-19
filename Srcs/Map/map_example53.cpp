/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example53.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:15:37 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 18:20:52 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 53 */
/* copy constructor */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example53(double &_time)
	{
		std::ostringstream	ss;
		typedef NS::pair<const int, int> T3;

		std::list<T3> lst;
		unsigned int lst_size = 7;
		for (unsigned int i = 0; i < lst_size; ++i)
			lst.push_back(T3(lst_size - i, i));

		NS::map<int, int> mp(lst.begin(), lst.end());
		NS::map<int, int>::iterator it = mp.begin(), ite = mp.end();

		NS::map<int, int> mp_range(it, --(--ite));
		for (int i = 0; it != ite; ++it)
			it->second = ++i * 5;

		it = mp.begin(); ite = --(--mp.end());
		NS::map<int, int> mp_copy(mp);
		for (int i = 0; it != ite; ++it)
			it->second = ++i * 7;

		ss << " " << mp.size();
		ss << " " << mp_range.size();
		ss << " " << mp_copy.size();

		mp = mp_copy;
		mp_copy = mp_range;
		mp_range.clear();

		ss << " " << mp.size();
		ss << " " << mp_range.size();
		ss << " " << mp_copy.size();

		_time = 0;
		return (ss.str());
	}
}
