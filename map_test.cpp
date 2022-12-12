/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_test.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:41:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/12 16:22:23 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 1 */
/* Example for pair and make_pair */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example1()
	{
		std::ostringstream	ss;

		NS::pair<int, std::string>	pair1;
		ss << " " << pair1.first;
		ss << " " << pair1.second;
		pair1 = NS::make_pair(1, "Nenie_Iri");
		ss << " " << pair1.first;
		ss << " " << pair1.second;
		NS::pair<int, std::string>	pair2(2, "HI");
		ss << " " << pair2.first;
		ss << " " << pair2.second;
		NS::pair<int, std::string>	pair3(pair1);
		ss << " " << pair3.first;
		ss << " " << pair3.second;
		ss << " " << NS::make_pair(4, 5).first;
		ss << " " << NS::make_pair(4, 5).second;
		NS::pair<int, int>	pair4(1, 5);
		NS::pair<int, int>	pair5(1, 4);
		ss << " " << (pair1 == pair2);
		ss << " " << (pair1 == pair3);
		ss << " " << (pair4 == pair5);
		ss << " " << (pair1 != pair2);
		ss << " " << (pair1 != pair3);
		ss << " " << (pair4 != pair5);
		ss << " " << (pair1 < pair2);
		ss << " " << (pair1 < pair3);
		ss << " " << (pair4 < pair5);
		ss << " " << (pair1 <= pair2);
		ss << " " << (pair1 <= pair3);
		ss << " " << (pair4 <= pair5);
		ss << " " << (pair1 > pair2);
		ss << " " << (pair1 > pair3);
		ss << " " << (pair4 > pair5);
		ss << " " << (pair1 >= pair2);
		ss << " " << (pair1 >= pair3);
		ss << " " << (pair4 >= pair5);
		return (ss.str());
	}
}

/* Example 2 */
/* Example for map constructors, size, empty, max_size */
/* Example for iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example2()
	{
		std::ostringstream	ss;

		NS::pair<int, std::string>	pair1;
		pair1.first = 0; 
		pair1.second = "A"; 
		NS::map<int, std::string> A;
		NS::map<int, std::string>::iterator it1;
		ss << " " << A.size();
		ss << " " << A.empty();
		A.max_size();
		A.insert(pair1);
		ss << " " << A.size();
		A.insert(NS::make_pair(-1, "B"));
		ss << " " << A.size();
		A.insert(NS::make_pair(1, "C"));
		ss << " " << pair1.first;
		ss << " " << pair1.second;
		ss << " " << A.size();
		A.max_size();
		ss << " " << A.empty();
		it1 = A.begin();
		ss << " " << (*it1).first;
		ss << " " << it1->first;
		ss << " " << it1->second;
		ss << " " << (it1++)->first;
		ss << " " << (++it1)->first;
		ss << " " << (--it1)->second;
		ss << " " << (it1--)->second;
		ss << " " << it1->second;
		return (ss.str());
	}
}

/* Example 3 */
/* Example for iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example3()
	{
		std::ostringstream	ss;

		NS::map<int, std::string> A;
		NS::map<int, std::string>::iterator it1;
		NS::map<int, std::string>::iterator it2;
		it1 = A.begin();
		it2 = A.end();
		ss << (it1 == it2);
		A.insert(NS::make_pair(0, "0A"));
		A.insert(NS::make_pair(-2, "-2B"));
		ss << " " << A.size();
		A.insert(NS::make_pair(2, "2C"));
		A.insert(NS::make_pair(-1, "-1D"));
		A.insert(NS::make_pair(-3, "-3E"));
		A.insert(NS::make_pair(1, "1F"));
		A.insert(NS::make_pair(3, "3J"));
		ss << " " << A.size();
		it1 = A.begin();
		it2 = A.end();
		ss << " " << (it1 == it2);
		ss << " " << it1->first;
		ss << " " << (--it2)->second;
		ss << " " << (it2--)->second;
		ss << " " << it2->second;
		it2->second = "hello";
		it2 = A.end();
		while (it1 != it2)
			ss << " " << (it1++)->second;
		return (ss.str());
	}
}

/* Example 4 */
/* Example for const iterators */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example4()
	{
		std::ostringstream	ss;

		NS::map<int, std::string> A;
		NS::map<int, std::string>::const_iterator it1;
		NS::map<int, std::string>::const_iterator it2;
		it1 = A.begin();
		it2 = A.end();
		ss << (it1 == it2);
		A.insert(NS::make_pair(0, "0A"));
		A.insert(NS::make_pair(-2, "-2B"));
		ss << " " << A.size();
		A.insert(NS::make_pair(2, "2C"));
		A.insert(NS::make_pair(-1, "-1D"));
		A.insert(NS::make_pair(-3, "-3E"));
		A.insert(NS::make_pair(1, "1F"));
		A.insert(NS::make_pair(3, "3J"));
		ss << " " << A.size();
		it1 = A.begin();
		it2 = A.end();
		ss << " " << (it1 == it2);
		ss << " " << it1->first;
		ss << " " << (--it2)->second;
		ss << " " << (it2--)->second;
		ss << " " << it2->second;
		it2 = A.end();
		while (it1 != it2)
			ss << " " << (it1++)->second;
		it1 = A.begin();
		while (it1 != it2)
			ss << " " << (--it2)->second;
		return (ss.str());
	}
}

/* Example 5 */
/* Example for iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example5()
	{
		std::ostringstream	ss;

		NS::map<int, std::string>				tree;
		NS::map<int, std::string>::iterator	it1;
		NS::map<int, std::string>::iterator	it2;
		tree.insert(NS::make_pair(0, "0A"));
		tree.insert(NS::make_pair(-2, "-2B"));
		tree.insert(NS::make_pair(2, "2C"));
		tree.insert(NS::make_pair(-1, "-1D"));
		tree.insert(NS::make_pair(-3, "-3E"));
		tree.insert(NS::make_pair(1, "1F"));
		tree.insert(NS::make_pair(3, "3J"));
		it1 = tree.begin();
		it2 = tree.begin();
		++it2;
		++it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		it1 = it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		++it1;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		return (ss.str());
	}
}

/* Example 6 */
/* Example for const iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example6()
	{
		std::ostringstream	ss;

		NS::map<int, std::string>					tree;
		NS::map<int, std::string>::const_iterator	it1;
		NS::map<int, std::string>::const_iterator	it2;
		tree.insert(NS::make_pair(0, "0A"));
		tree.insert(NS::make_pair(-2, "-2B"));
		tree.insert(NS::make_pair(2, "2C"));
		tree.insert(NS::make_pair(-1, "-1D"));
		tree.insert(NS::make_pair(-3, "-3E"));
		tree.insert(NS::make_pair(1, "1F"));
		tree.insert(NS::make_pair(3, "3J"));
		it1 = tree.begin();
		it2 = tree.begin();
		++it2;
		++it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		it1 = it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		++it1;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		return (ss.str());
	}
}

/* Example 7 */
/* Example for const and non-const iterators comparison */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example7()
	{
		std::ostringstream	ss;

		NS::map<int, std::string>					tree;
		NS::map<int, std::string>::iterator		it1;
		NS::map<int, std::string>::const_iterator	it2;
		tree.insert(NS::make_pair(0, "0A"));
		tree.insert(NS::make_pair(-2, "-2B"));
		tree.insert(NS::make_pair(2, "2C"));
		tree.insert(NS::make_pair(-1, "-1D"));
		tree.insert(NS::make_pair(-3, "-3E"));
		tree.insert(NS::make_pair(1, "1F"));
		tree.insert(NS::make_pair(3, "3J"));
		it1 = tree.begin();
		it2 = tree.begin();
		++it2;
		++it2;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		++it1;
		++it1;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		++it1;
		ss << " " << (it2 == it1);
		ss << " " << (it2 != it1);
		return (ss.str());
	}
}

/* Example 8 */
/* Example for other compare function */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example8()
	{
		std::ostringstream	ss;

		NS::map<int, std::string, std::greater<int> > A;
		NS::map<int, std::string, std::greater<int> >::iterator it1;
		NS::map<int, std::string, std::greater<int> >::iterator it2;
		it1 = A.begin();
		it2 = A.end();
		ss << (it1 == it2);
		A.insert(NS::make_pair(0, "0A"));
		A.insert(NS::make_pair(-2, "-2B"));
		ss << " " << A.size();
		A.insert(NS::make_pair(2, "2C"));
		A.insert(NS::make_pair(-1, "-1D"));
		A.insert(NS::make_pair(-3, "-3E"));
		A.insert(NS::make_pair(1, "1F"));
		A.insert(NS::make_pair(3, "3J"));
		ss << " " << A.size();
		it1 = A.begin();
		it2 = A.end();
		ss << " " << (it1 == it2);
		ss << " " << it1->first;
		ss << " " << (--it2)->second;
		ss << " " << (it2--)->second;
		ss << " " << it2->second;
		it2->second = "hello";
		it2 = A.end();
		while (it1 != it2)
			ss << " " << (it1++)->second;
		return (ss.str());
	}
}

/* Example 9 */
/* Example for reverse iterator */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example9()
	{
		std::ostringstream	ss;

		NS::map<int, std::string>						A;
		NS::map<int, std::string>::reverse_iterator	it1;
		NS::map<int, std::string>::reverse_iterator	it2;
		it1 = A.rbegin();
		it2 = A.rend();
		ss << (it1 == it2);
		A.insert(NS::make_pair(0, "0A"));
		A.insert(NS::make_pair(-2, "-2B"));
		A.insert(NS::make_pair(2, "2C"));
		A.insert(NS::make_pair(-1, "-1D"));
		A.insert(NS::make_pair(-3, "-3E"));
		A.insert(NS::make_pair(1, "1F"));
		A.insert(NS::make_pair(3, "3J"));
		it1 = A.rbegin();
		it2 = A.rend();
		ss << " " << (it1 == it2);
		ss << " " << it1->first;
		ss << " " << (--it2)->second;
		ss << " " << (it2--)->second;
		ss << " " << it2->second;
		it2->second = "hello";
		it2 = A.rend();
		while (it1 != it2)
			ss << " " << (it1++)->second;
		return (ss.str());
	}
}

/* Example 10 */
/* Example for key and value compare */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example10()
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('x', 1001));
		A.insert(NS::make_pair('y', 2002));
		A.insert(NS::make_pair('z', 3003));
		NS::pair<char, int> highest = *(A.rbegin());
		NS::map<char, int>::iterator	it = A.begin();
		ss << COLOR_YELLOW_B;
		do
		{
			ss << " " << it->first << " " << it->second;
		} while (A.value_comp()(*it++, highest));
		NS::map<char, int>::value_compare	cmp = A.value_comp();
		ss << " " << cmp(*A.begin(), *A.begin());
		ss << " " << cmp(*A.begin(), *(++A.begin()));
		NS::map<char, int>::key_compare	key_cmp = A.key_comp();
		ss << " " << key_cmp('a', 'b');
		ss << " " << key_cmp('a', 'a');
		return (ss.str());
	}
}

/* Example 11 */
/* Example for get_allocator */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example11()
	{
		std::ostringstream	ss;

		NS::map<char, int>			A;
		NS::pair<const char, int>	*p;
		p = A.get_allocator().allocate(42);
		A.get_allocator().deallocate(p, 42);
		return (ss.str());
	}
}

/* Example 12 */
/* Example for find */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example12()
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('b', -2));
		A.insert(NS::make_pair('f', 2));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('e', 1));
		A.insert(NS::make_pair('a', -3));
		A.insert(NS::make_pair('j', 3));
		ss << " " << A.find('e')->first;
		NS::map<char, int>::const_iterator	it1 = A.find('a');
		NS::map<char, int>::const_iterator	it2 = A.find('o');
		while (it1 != it2)
			ss << " " << (it1++)->first;
		return (ss.str());
	}
}

/* Example 13 */
/* Example for count */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example13()
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('b', -2));
		A.insert(NS::make_pair('f', 2));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('e', 1));
		A.insert(NS::make_pair('g', 3));
		for (char c = 'a'; c < 'k'; ++c)
			ss << " " << A.count(c);
		A.clear();
		ss << " " << A.size();
		return (ss.str());
	}
}

/* Example 14 */
/* Example for bounds */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example14()
	{
		std::ostringstream	ss;

		NS::map<char, int>	A;
		A.insert(NS::make_pair('d', 0));
		A.insert(NS::make_pair('b', -2));
		A.insert(NS::make_pair('f', 2));
		A.insert(NS::make_pair('c', -1));
		A.insert(NS::make_pair('e', 1));
		A.insert(NS::make_pair('a', -3));
		A.insert(NS::make_pair('g', 3));
		NS::map<char, int>::iterator	itlow;
		NS::map<char, int>::iterator	itup;
		itlow = A.lower_bound('c');
		itup = A.lower_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.lower_bound('0');
		itup = A.lower_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.lower_bound('c');
		itup = A.lower_bound('x');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.upper_bound('c');
		itup = A.upper_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.upper_bound('0');
		itup = A.upper_bound('e');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.upper_bound('c');
		itup = A.upper_bound('x');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		itlow = A.lower_bound('b');
		itup = A.upper_bound('d');
		for (; itlow != itup; ++itlow)
			ss << " " << itlow->first;
		A.clear();
		ss << " " << A.size();
		return (ss.str());
	}
}

/* Example 15 */
/* Example for inserts */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example15()
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(4, 0));
		A.insert(NS::make_pair(2, -2));
		A.insert(NS::make_pair(6, 2));
		A.insert(NS::make_pair(3, -1));
		A.insert(NS::make_pair(5, 1));
		A.insert(NS::make_pair(1, -3));
		ss << " " << A.size();
		NS::pair<NS::map<int, int>::iterator, bool>	res;
		res = A.insert(NS::make_pair(7, 3));
		ss << " " << res.second;
		ss << " " << res.first->second;
		ss << " " << A.size();
		res = A.insert(NS::pair<int, int>(6, 8));
		ss << " " << res.second;
		ss << " " << res.first->second;
		ss << " " << A.size();
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(1, 100));
		B.insert(NS::pair<int, int>(-1, -100));
		B.insert(NS::pair<int, int>(2, 200));
		NS::map<int, int>::iterator	it5;
		it5 = B.insert(B.begin(), NS::pair<int, int>(3, 300));
		ss << " " << it5->first;
		it5 = B.insert(B.begin(), NS::pair<int, int>(3, 300));
		ss << " " << it5->first;
		it5 = B.insert(B.end(), NS::pair<int, int>(-30, -3000));
		ss << " " << it5->first;
		it5 = B.insert(B.end(), NS::pair<int, int>(-30, -3000));
		ss << " " << it5->first;
		it5 = B.insert(--B.end(), NS::pair<int, int>(-2, -200));
		ss << " " << it5->first;
		it5 = B.insert(--B.end(), NS::pair<int, int>(-2, -200));
		ss << " " << it5->first;
		it5 = B.insert(++(++B.begin()), NS::pair<int, int>(-8, -800));
		ss << " " << it5->first;
		it5 = B.insert(++(++B.begin()), NS::pair<int, int>(-8, -800));
		ss << " " << it5->first;
		it5 = B.insert(--(--(--B.end())), NS::pair<int, int>(1000, 100000));
		ss << " " << it5->first;
		it5 = B.insert(--(--(--B.end())), NS::pair<int, int>(1000, 100000));
		ss << " " << it5->first;
		it5 = B.insert(--(--(--B.end())), NS::pair<int, int>(1000, 100000));
		ss << " " << it5->first << ",";
		for (NS::map<int, int>::iterator it = B.begin(); it != B.end(); ++it)
			ss << " " << it->second;
		ss << " " << B.size();
		NS::map<int, int>::iterator it10 = A.begin();
		NS::map<int, int>::iterator it11 = A.end();
		B.insert(it10, it11);
		for (NS::map<int, int>::iterator it = B.begin(); it != B.end(); ++it)
			ss << " " << it->second;
		ss << " " << B.size();
		B.clear();
		ss << " " << B.size();
		return (ss.str());
	}
}

/* Example 16 */
/* Example for erase */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example16()
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		A.insert(NS::make_pair(-1, -1));
		A.insert(NS::make_pair(1, 1));
		A.insert(NS::make_pair(-3, -3));
		A.insert(NS::make_pair(3, 3));
		A.insert(NS::make_pair(-4, -4));
		A.insert(NS::make_pair(4, 4));
		ss << " " << A.size() << " ";
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		NS::map<int, int>::iterator	it1;
		NS::map<int, int>::iterator	it2;
		it1 = A.find(-1);
		it2 = A.find(1);
		A.erase(it1, it2);
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		ss << " " << A.size() << " ";
		A.erase(A.find(-2));
		A.erase(A.find(2));
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		ss << " " << A.size() << " ";
		A.erase(A.find(-3));
		A.erase(A.find(4));
		for (NS::map<int, int>::iterator first = A.begin(); first != A.end(); ++first)
			ss << " " << first->second;
		ss << " " << A.size();
		A.clear();
		ss << " " << A.size();
		return (ss.str());
	}
}

/* Example 17 */
/* Example for equal_range and constructors*/

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example17()
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		A.insert(NS::make_pair(-1, -1));
		A.insert(NS::make_pair(1, 1));
		A.insert(NS::make_pair(-3, -3));
		A.insert(NS::make_pair(3, 3));
		A.insert(NS::make_pair(-4, -4));
		A.insert(NS::make_pair(4, 4));
		NS::pair<NS::map<int, int>::iterator, NS::map<int, int>::iterator>	p;
		p = A.equal_range(-1);
		ss << " " << p.first->first;
		ss << " " << p.second->first;
		p = A.equal_range(-4);
		ss << " " << p.first->first;
		ss << " " << p.second->first;
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(100, 10000));
		B.insert(NS::pair<int, int>(-100, -10000));
		B.insert(NS::pair<int, int>(200, 20000));
		NS::map<int, int>::iterator	it5;
		it5 = B.insert(B.begin(), NS::pair<int, int>(30, 3000));
		it5 = B.insert(B.end(), NS::pair<int, int>(-300, -30000));
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		A = B;
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		NS::map<int, int>	C;
		C.insert(NS::make_pair(0, 0));
		C.insert(NS::make_pair(-2, -2));
		A = C;
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		NS::map<int, int>	D(B.begin(), B.end());
		for (NS::map<int, int>::iterator f = D.begin(); f != D.end(); ++f)
			ss << " " << f->second;
		return (ss.str());
	}
}

/* Example 18 */
/* Example for swap */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example18()
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		A.insert(NS::make_pair(-1, -1));
		A.insert(NS::make_pair(1, 1));
		A.insert(NS::make_pair(-3, -3));
		A.insert(NS::make_pair(3, 3));
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(100, 10000));
		B.insert(NS::pair<int, int>(-100, -10000));
		B.insert(NS::pair<int, int>(200, 20000));
		NS::map<int, int>::iterator	it5;
		it5 = B.insert(B.begin(), NS::pair<int, int>(30, 3000));
		it5 = B.insert(B.end(), NS::pair<int, int>(-300, -30000));
		NS::map<int, int>::iterator	it11 = A.begin();
		NS::map<int, int>::iterator	it22 = B.begin();
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		ss << " " << A.size();
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		ss << " " << B.size();
		A.swap(B);
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		ss << " " << A.size();
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		ss << " " << B.size();
		ss << " " << (it11 == B.begin());
		ss << " " << (it22 == A.begin());
		swap(A, B);
		for (NS::map<int, int>::iterator f = A.begin(); f != A.end(); ++f)
			ss << " " << f->second;
		ss << " " << A.size();
		for (NS::map<int, int>::iterator f = B.begin(); f != B.end(); ++f)
			ss << " " << f->second;
		ss << " " << B.size();
		return (ss.str());
	}
}

/* Example 19 */
/* Example for comparison functions */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example19()
	{
		std::ostringstream	ss;

		NS::map<int, int>	A;
		A.insert(NS::make_pair(0, 0));
		A.insert(NS::make_pair(-2, -2));
		A.insert(NS::make_pair(2, 2));
		NS::map<int, int>	B;
		B.insert(NS::pair<int, int>(0, 0));
		B.insert(NS::pair<int, int>(-100, -10000));
		B.insert(NS::pair<int, int>(200, 20000));
		NS::map<int, int>	C;
		C.insert(NS::make_pair(0, 0));
		C.insert(NS::make_pair(-2, -2));
		C.insert(NS::make_pair(2, 2));
		NS::map<int, int>	D;
		D.insert(NS::pair<int, int>(0, 0));
		D.insert(NS::pair<int, int>(-1, 1));
		D.insert(NS::pair<int, int>(200, -20000));
		ss << " " << (A == B);
		ss << " " << (A == C);
		ss << " " << (A == D);
		ss << " " << (A != B);
		ss << " " << (A != C);
		ss << " " << (A != D);
		ss << " " << (A < B);
		ss << " " << (A < C);
		ss << " " << (A < D);
		ss << " " << (A <= B);
		ss << " " << (A <= C);
		ss << " " << (A <= D);
		ss << " " << (A > B);
		ss << " " << (A > C);
		ss << " " << (A > D);
		ss << " " << (A >= B);
		ss << " " << (A >= C);
		ss << " " << (A >= D);
		return (ss.str());
	}
}

/* Example 20 */
/* Example for operator[] and at() */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example20()
	{
		std::ostringstream	ss;

		NS::map<char, char>	A;
		A['a'] = 'A';
		A['b'] = 'B';
		A['c'] = A['b'];
		ss << " " << A['a'];
		ss << " " << A['b'];
		ss << " " << A['c'];
		ss << " " << A['d'];
		A.at('a') = 'a';
		A.at('b') = 'b';
		A.at('c') = 'c';
		ss << " " << A.at('a');
		ss << " " << A.at('b');
		ss << " " << A.at('c');
		try
		{
			A.at('t');
		}
		catch (const std::exception &e)
		{
			ss << " " << e.what();
		}
		return (ss.str());
	}
}

/* Example 21 */
/* Example from mli-tester about erase */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example21()
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
		return (ss.str());
	}
}

/* Example 22 */
/* Example from bounds */

#include "test.hpp"

namespace	NS_TEST
{
	const std::string	map_example22()
	{
		std::ostringstream	ss;

		NS::vector<int> v;
		NS::map<int, int, std::greater<int> > mp2;
		mp2.insert(NS::make_pair(20, 20));
		mp2.insert(NS::make_pair(30, 30));
		mp2.insert(NS::make_pair(40, 40));
		mp2.insert(NS::make_pair(50, 50));
		mp2.insert(NS::make_pair(60, 60));
		NS::map<int, int>::iterator it;
		for (int i = 11; i < 70; i += 10) {
			it = mp2.upper_bound(i);
			v.push_back(it->first);
		}
		for (NS::vector<int>::iterator it1 = v.begin(); it1 != v.end(); ++it1)
			ss << " " << *it1;
		return (ss.str());
	}
}

#endif
