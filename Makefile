# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:17:12 by vismaily          #+#    #+#              #
#    Updated: 2022/12/10 17:20:20 by vismaily         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= crash_test

TMP				= Tmp

PATH_VECTOR		= ./Tests/Vector/

SRCS			= $(wildcard $(PATH_VECTOR)*.cpp)
SRCS_MAIN		= main.cpp vector_test.cpp

OBJS_V_STD		= $(patsubst $(PATH_VECTOR)%.cpp, $(TMP)/%_std.o, $(SRCS))
OBJS_V_FT		= $(patsubst $(PATH_VECTOR)%.cpp, $(TMP)/%_ft.o, $(SRCS))

OBJS_MAIN		= $(patsubst %.cpp, $(TMP)/%.o, $(SRCS_MAIN))
OBJS			= $(OBJS_V_STD) $(OBJS_V_FT) $(OBJS_MAIN)

CPP				= c++

CPP_FLAGS		= -Wall -Wextra -Werror -Wno-unused -Wno-unused-parameter

INCLUDES		= -I./

DEFINES			= -D V=\"$(Vdef)\"
DEFINES_STD		= $(DEFINES) -D NS=std -D NS_TEST=std_test
DEFINES_FT		= $(DEFINES) -D NS=ft  -D NS_TEST=ft_test

RM				= rm -rf

$(NAME):		$(TMP) $(OBJS)
				$(CPP) -o $(NAME) $(OBJS)

$(TMP):
				@mkdir $(TMP)

$(TMP)/%_std.o:	$(PATH_VECTOR)%.cpp
				$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_STD) -c $< -o $@

$(TMP)/%_ft.o:	$(PATH_VECTOR)%.cpp
				$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_FT) -c $< -o $@

$(TMP)/%.o:		%.cpp
				$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

all:			$(NAME)

clean:
				@$(RM) $(TMP)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
