/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:29:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/10 17:07:23 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

# include <iostream>
# include <string>

# include <vector>
# include <stack>
# include <map>

# include V

# define FT					"ft"
# define STD				"std"
# define COLOR_YELLOW_B		"\033[1;33m"
# define COLOR_PURPLE_B		"\033[1;35m"
# define COLOR_BLUE_B		"\033[1;34m"
# define COLOR_GREEN_B		"\033[1;32m"
# define COLOR_GREEN		"\033[0;32m"
# define COLOR_RED_B		"\033[1;31m"
# define COLOR_END			"\033[0m"

namespace	std_test
{
	void example1();
}

namespace	ft_test
{
	void example1();
}

void	example1();

void	vector_test();

void	stack_test();
void	map_test();

#endif
