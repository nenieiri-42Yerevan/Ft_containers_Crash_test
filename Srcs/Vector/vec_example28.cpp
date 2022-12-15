/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example28.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:29:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/15 19:27:03 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Example 1 */
/* assign() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	vec_example28(double &_time)
	{
		std::ostringstream	ss;
		struct timeval		start;
		struct timeval		end;

		NS::vector<int>		_vector;
		std::vector<int>	tmp;
		std::vector<int>	tmp2;

		_vector.assign(3, 3);

		tmp.assign(4000 * 10000, 1);
		tmp2.assign(4 * 10000, 1);

		gettimeofday(&start, NULL);

		_vector.assign(tmp.begin(), tmp.end());
		ss << " " << _vector[1];
		ss << " " << _vector.size();
		ss << " " << _vector.capacity();
		_vector.assign(tmp2.begin(), tmp2.end());

		gettimeofday(&end, NULL);

		_time = (end.tv_sec - start.tv_sec) * 1e6;
		_time = (_time + (end.tv_usec - start.tv_usec)) * 1e-6;

		ss << " " << _vector[444];
		ss << " " << _vector.size();
		ss << " " << _vector.capacity();
		return (ss.str());
	}
}
