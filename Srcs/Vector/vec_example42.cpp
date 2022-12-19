/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_example42.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:40:50 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/19 13:48:56 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example 42 */
/* insert(range) */

#include "test.hpp"

namespace	NS_TEST
{
	class	B
	{
		public:
			char	*l;
			int		i;

			B() : l(NULL), i(1) {};
			B(const int &ex)
			{
				this->i = ex;
				this->l = new char('a');
			};
			virtual ~B()
			{
				delete this->l;
				this->l = NULL;
			};
	};

	class A : public B
	{
		public:
			A() : B() {};
			A(const B* ex)
			{
				this->l = new char(*(ex->l));
				this->i = ex->i;
				if (ex->i == -1) throw "n";
			}
			~A()
			{
				delete this->l;
				this->l = NULL;
			};
	};

	const std::string	vec_example42(double &_time)
	{
		std::ostringstream	ss;
		clock_t				start;
		clock_t				end;
		NS::vector<int>		_vector;

		NS::vector<int>		tmp;
		tmp.assign(26000000, 1);
		_vector.assign(42000000, 1);

		start = clock();
		_vector.insert(_vector.end() - 10000000, tmp.begin(), tmp.end());
		end = clock();
		_time = (double)(end - start);

		ss << " " << (_vector[3]);
		ss << " " << (_vector.size());
		ss << " " << (_vector.capacity());

		std::unique_ptr<B> k2(new B(3));
		std::unique_ptr<B> k3(new B(4));
		std::unique_ptr<B> k4(new B(-1));

		NS::vector<A>	vv;
		NS::vector<B*>	v1;

		v1.push_back(&(*k2));
		v1.push_back(&(*k3));
		v1.push_back(&(*k4));
		try
		{
			vv.insert(vv.begin(), v1.begin(), v1.end());
		}
		catch (...)
		{
			ss << " " << (vv.size());
			ss << " " << (vv.capacity());
		}

		return (ss.str());
	}
}
