/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:29:35 by vismaily          #+#    #+#             */
/*   Updated: 2022/12/18 17:49:11 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <iomanip>
# include <stdexcept>
# include <vector>
# include <stack>
# include <map>
# include <list>
# include <deque>
# include <limits>
# include <unistd.h>
# include <fcntl.h>
# include <cstring>
# include <sys/wait.h>
# include <sys/time.h>

# ifdef V
#  include V
# endif
# ifdef S
#  include S
# endif
# ifdef M
#  include M
# endif

# define COLOR_YELLOW_B		"\033[1;33m"
# define COLOR_YELLOW		"\033[0;33m"
# define COLOR_PURPLE_B		"\033[1;35m"
# define COLOR_PURPLE		"\033[0;35m"
# define COLOR_BLUE_B		"\033[1;34m"
# define COLOR_BLUE			"\033[0;34m"
# define COLOR_GREEN_B		"\033[1;32m"
# define COLOR_GREEN		"\033[0;32m"
# define COLOR_RED_B		"\033[1;31m"
# define COLOR_RED			"\033[0;31m"
# define COLOR_END			"\033[0m"

# include PROTOTYPES

void	run(int num, const std::string (*f1)(double &), const std::string (*f2)(double &));

#endif
