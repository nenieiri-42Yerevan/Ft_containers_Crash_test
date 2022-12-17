/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_example26.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:24:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/17 16:19:55 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 26 */
/* compare class */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example26(double &_time)
	{
		std::ostringstream	ss;
		NS::map<int, int>	mp;

		mp.insert(NS::make_pair(16, 3));
		mp.insert(NS::make_pair(8, 3));
		mp.insert(NS::make_pair(23, 3));
		mp.insert(NS::make_pair(7, 3));
		mp.insert(NS::make_pair(19, 3));
		mp.insert(NS::make_pair(29, 3));
		mp.insert(NS::make_pair(41, 3));
		mp.insert(NS::make_pair(4, 3));
		mp.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp.end(); it != mp.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int, std::greater<int> > mp1;

		mp1.insert(NS::make_pair(16, 3));
		mp1.insert(NS::make_pair(8, 3));
		mp1.insert(NS::make_pair(23, 3));
		mp1.insert(NS::make_pair(7, 3));
		mp1.insert(NS::make_pair(19, 3));
		mp1.insert(NS::make_pair(29, 3));
		mp1.insert(NS::make_pair(41, 3));
		mp1.insert(NS::make_pair(4, 3));
		mp1.insert(NS::make_pair(11, 3));

		ss << " " << mp1.begin()->first;
		mp1.erase(41);
		ss << " " << mp1.begin()->first;
		mp1.erase(29);
		ss << " " << mp1.begin()->first;

		NS::map<int, int, std::greater<int> > mp2;
		mp2.insert(NS::make_pair(3, 3));
		ss << " " << mp2.begin()->first;
		mp2.erase(3);
		if (mp2.begin() == mp2.end())
			ss << " " << 1;

		NS::map<int, int, std::plus<int> > mp3;

		mp3.insert(NS::make_pair(16, 3));
		mp3.insert(NS::make_pair(8, 3));
		mp3.insert(NS::make_pair(23, 3));
		mp3.insert(NS::make_pair(7, 3));
		mp3.insert(NS::make_pair(19, 3));
		mp3.insert(NS::make_pair(29, 3));
		mp3.insert(NS::make_pair(41, 3));
		mp3.insert(NS::make_pair(4, 3));
		mp3.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp3.begin(); it != mp3.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp3.end(); it != mp3.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int, std::minus<int> > mp4;

		mp4.insert(NS::make_pair(16, 3));
		mp4.insert(NS::make_pair(8, 3));
		mp4.insert(NS::make_pair(23, 3));
		mp4.insert(NS::make_pair(7, 3));
		mp4.insert(NS::make_pair(19, 3));
		mp4.insert(NS::make_pair(29, 3));
		mp4.insert(NS::make_pair(41, 3));
		mp4.insert(NS::make_pair(4, 3));
		mp4.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp4.begin(); it != mp4.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp4.end(); it != mp4.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int, std::greater_equal<int> > mp5;

		mp5.insert(NS::make_pair(16, 3));
		mp5.insert(NS::make_pair(8, 3));
		mp5.insert(NS::make_pair(23, 3));
		mp5.insert(NS::make_pair(7, 3));
		mp5.insert(NS::make_pair(19, 3));
		mp5.insert(NS::make_pair(29, 3));
		mp5.insert(NS::make_pair(41, 3));
		mp5.insert(NS::make_pair(4, 3));
		mp5.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp5.begin(); it != mp5.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp5.end(); it != mp5.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int, std::multiplies<int> > mp6;

		mp6.insert(NS::make_pair(16, 3));
		mp6.insert(NS::make_pair(8, 3));
		mp6.insert(NS::make_pair(23, 3));
		mp6.insert(NS::make_pair(7, 3));
		mp6.insert(NS::make_pair(19, 3));
		mp6.insert(NS::make_pair(29, 3));
		mp6.insert(NS::make_pair(41, 3));
		mp6.insert(NS::make_pair(4, 3));
		mp6.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp6.begin(); it != mp6.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp6.end(); it != mp6.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int, std::bit_xor<int> > mp7;

		mp7.insert(NS::make_pair(16, 3));
		mp7.insert(NS::make_pair(8, 3));
		mp7.insert(NS::make_pair(23, 3));
		mp7.insert(NS::make_pair(7, 3));
		mp7.insert(NS::make_pair(19, 3));
		mp7.insert(NS::make_pair(29, 3));
		mp7.insert(NS::make_pair(41, 3));
		mp7.insert(NS::make_pair(4, 3));
		mp7.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp7.begin(); it != mp7.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp7.end(); it != mp7.begin(); it--)
			ss << " " << it->first;

		NS::map<int, int, std::logical_and<int> > mp8;

		mp8.insert(NS::make_pair(16, 3));
		mp8.insert(NS::make_pair(8, 3));
		mp8.insert(NS::make_pair(23, 3));
		mp8.insert(NS::make_pair(7, 3));
		mp8.insert(NS::make_pair(19, 3));
		mp8.insert(NS::make_pair(29, 3));
		mp8.insert(NS::make_pair(41, 3));
		mp8.insert(NS::make_pair(4, 3));
		mp8.insert(NS::make_pair(11, 3));

		for (NS::map<int, int>::iterator it = mp8.begin(); it != mp8.end(); it++)
			ss << " " << it->first;
		for (NS::map<int, int>::iterator it = --mp8.end(); it != mp8.begin(); it--)
			ss << " " << it->first;

		ss << " " << mp1.size();

		_time = 0;
		return (ss.str());
	}
}
