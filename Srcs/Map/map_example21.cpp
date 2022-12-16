/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example21.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:31:55 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/16 13:31:23 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 21 */
/* Example from mli-tester about erase */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example21(double &_time)
	{
		unsigned int 		lst_size = 6;
		std::ostringstream	ss;

		std::list<NS::pair<const int, std::string> > lst;
		for (unsigned int i = 0; i < lst_size; ++i)
			lst.push_back(NS::make_pair(i, std::string((lst_size - i), i + 65)));
		NS::map<const int, std::string> mp(lst.begin(), lst.end());
		ss << " " << mp.size();
		for (NS::map<const int, std::string>::iterator it = mp.begin(); it != mp.end(); ++it)
			ss << " " << it->first;
		for (int i = 2; i < 4; ++i)
			mp.erase(i);
		for (NS::map<const int, std::string>::iterator it = mp.begin(); it != mp.end(); ++it)
			ss << " " << it->first;
		mp.erase(mp.begin()->first);
		mp.erase((--mp.end())->first);
		for (NS::map<const int, std::string>::iterator it = mp.begin(); it != mp.end(); ++it)
			ss << " " << it->first;
		mp[-1] = "Hello";
		mp[10] = "Hi there";
		mp[10] = "Hi there";
		ss << " " << mp.size();
		mp.erase(0);
		mp.erase(1);
		for (NS::map<const int, std::string>::iterator it = mp.begin(); it != mp.end(); ++it)
			ss << " " << it->first;
		_time = 0;
		return (ss.str());
	}
}
