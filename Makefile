# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:17:12 by vismaily          #+#    #+#              #
#    Updated: 2022/12/12 16:34:58 by vismaily         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= crash_test

TMP				= Tmp

PATH			= ./Srcs
PATH_VECTOR		= $(PATH)/Vector
PATH_STACK		= $(PATH)/Stack
PATH_MAP		= $(PATH)/Map

SRCS_V			= $(wildcard $(PATH_VECTOR)/*.cpp)
SRCS_S			= $(wildcard $(PATH_STACK)/*.cpp)
SRCS_M			= $(wildcard $(PATH_MAP)/*.cpp)
SRCS_MAIN		= $(wildcard $(PATH)/*.cpp)

OBJS_V_STD		= $(patsubst $(PATH_VECTOR)/%.cpp, $(TMP)/%_std.o, $(SRCS_V))
OBJS_V_FT		= $(patsubst $(PATH_VECTOR)/%.cpp, $(TMP)/%_ft.o, $(SRCS_V))
OBJS_S_STD		= $(patsubst $(PATH_STACK)/%.cpp, $(TMP)/%_std.o, $(SRCS_S))
OBJS_S_FT		= $(patsubst $(PATH_STACK)/%.cpp, $(TMP)/%_ft.o, $(SRCS_S))
OBJS_M_STD		= $(patsubst $(PATH_MAP)/%.cpp, $(TMP)/%_std.o, $(SRCS_M))
OBJS_M_FT		= $(patsubst $(PATH_MAP)/%.cpp, $(TMP)/%_ft.o, $(SRCS_M))
OBJS_MAIN		= $(patsubst $(PATH)/%.cpp, $(TMP)/%.o, $(SRCS_MAIN))
OBJS			= $(OBJS_V_STD) $(OBJS_V_FT) \
				  $(OBJS_S_STD) $(OBJS_S_FT) \
				  $(OBJS_M_STD) $(OBJS_M_FT) \
				  $(OBJS_MAIN)

CPP				= c++

CPP_FLAGS		= -Wall -Wextra -Werror -Wno-unused -Wno-unused-parameter

INCLUDES		= -I./

DEFINES			= -D V=\"$(Vdef)\" -D S=\"$(Sdef)\" -D M=\"$(Mdef)\"
DEFINES_STD		= $(DEFINES) -D NS=std -D NS_TEST=std_test
DEFINES_FT		= $(DEFINES) -D NS=ft  -D NS_TEST=ft_test

RM				= rm -rf

$(NAME):		$(TMP) $(OBJS)
				@$(CPP) -o $(NAME) $(OBJS)

$(TMP):
				@mkdir $(TMP)

$(TMP)/%_std.o:	$(PATH_VECTOR)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_STD) -c $< -o $@

$(TMP)/%_ft.o:	$(PATH_VECTOR)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_FT) -c $< -o $@

$(TMP)/%_std.o:	$(PATH_STACK)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_STD) -c $< -o $@

$(TMP)/%_ft.o:	$(PATH_STACK)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_FT) -c $< -o $@

$(TMP)/%_std.o:	$(PATH_MAP)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_STD) -c $< -o $@

$(TMP)/%_ft.o:	$(PATH_MAP)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES_FT) -c $< -o $@

$(TMP)/%.o:		$(PATH)/%.cpp
				@$(CPP) $(CPP_FLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

all:			$(NAME)

clean:
				@$(RM) $(TMP)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
