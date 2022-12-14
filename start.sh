#!/bin/bash

. ./config.sh

COLOR_YELLOW_B='\033[1;33m';
COLOR_YELLOW='\033[0;33m';
COLOR_PURPLE_B='\033[1;35m';
COLOR_PURPLE='\033[0;35m';
COLOR_BLUE_B='\033[1;34m';
COLOR_BLUE='\033[0;34m';
COLOR_GREEN_B='\033[1;32m';
COLOR_GREEN='\033[0;32m';
COLOR_RED_B='\033[1;31m';
COLOR_RED='\033[0;31m';
COLOR_CYAN_B='\033[1;36m':
COLOR_CYAN='\033[0;36m':
COLOR_END='\033[0m';

CPP='c++';
CPP_FLAGS='-Wall -Wextra -Werror -I./Srcs -I./';
defines_ft="-D NS=ft -D NS_TEST=ft_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";
defines_std="-D NS=std -D NS_TEST=std_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";

NAME="crash_test";

SRCS="./Srcs/";
TMP=$SRCS"Tmp/";

################################### VECTOR #####################################

VECTOR=$SRCS"Vector/";
VECTOR_FUNCTIONS=(
					"vec_example1"
					"vec_example2"
					"vec_example3"
					"vec_example4"
					"vec_example5"
					"vec_example6"
					"vec_example7"
					"vec_example8"
					"vec_example9"
					"vec_example10"
					"vec_example11"
					"vec_example12"
					"vec_example13"
					"vec_example14"
					"vec_example15"
					"vec_example16"
					"vec_example17"
					"vec_example18"
					"vec_example19"
					"vec_example20"
					"vec_example21"
					"vec_example22"
					"vec_example23"
					"vec_example24"
					"vec_example25"
					"vec_example26"
					"vec_example27"
				 );

for FUNC in "${VECTOR_FUNCTIONS[@]}"
do
	VECT_PROTOTYPES+="const std::string $FUNC(); ";
done

################################################################################
#################################### STACK #####################################

STACK=$SRCS"Stack/";
STACK_FUNCTIONS=(
					"stack_example1"
					"stack_example2"
				);

for FUNC in "${STACK_FUNCTIONS[@]}"
do
	STACK_PROTOTYPES+="const std::string $FUNC(); ";
done

###############################################################################
#################################### MAP ######################################

MAP=$SRCS"Map/";
MAP_FUNCTIONS=(
				"map_example1"
				"map_example2"
				"map_example3"
				"map_example4"
				"map_example5"
				"map_example6"
				"map_example7"
				"map_example8"
				"map_example9"
				"map_example10"
				"map_example11"
				"map_example12"
				"map_example13"
				"map_example14"
				"map_example15"
				"map_example16"
				"map_example17"
				"map_example18"
				"map_example19"
				"map_example20"
				"map_example21"
				"map_example22"
			  );

for FUNC in "${MAP_FUNCTIONS[@]}"
do
	MAP_PROTOTYPES+="const std::string $FUNC(); ";
done

###############################################################################

mkdir -p $TMP;

RUN_SRC=$SRCS"run.cpp";
RUN_OBJ=$TMP"run.o";

MAIN_SRC=$SRCS"main.cpp";
MAIN_OBJ=$TMP"main.o";

PROTOTYPES_CONTENT="{ $VECT_PROTOTYPES $STACK_PROTOTYPES $MAP_PROTOTYPES }"
echo "namespace std_test $PROTOTYPES_CONTENT" >> $TMP"PROTOTYPES";
echo "namespace ft_test $PROTOTYPES_CONTENT" >> $TMP"PROTOTYPES";
PROTOTYPES="-D PROTOTYPES=\"$TMP"
PROTOTYPES+='PROTOTYPES"';

LEAKS_COMMAND=$(whereis leaks);
if [ -z "$LEAKS_COMMAND" ]; then
	echo ;
	printf "${COLOR_RED_B}'leaks' command doesn't found,"
	printf " so leaks will not be checking. ${COLOR_END}"
	echo ;
	echo ;
	LEAKS_ON=0;
else
	LEAKS_ON=1;
fi

$CPP $CPP_FLAGS $PROTOTYPES -o $RUN_OBJ -c $RUN_SRC;

###############################################################################
################################### VECTOR #####################################

for FUNC in "${VECTOR_FUNCTIONS[@]}"
do
	F1_SRC=$VECTOR"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:11}
	printf "${COLOR_PURPLE_B}Case ";
	if (($N < 10)); then
		echo -n " ";
	fi
	printf "$N:${COLOR_YELLOW_B} COMPILATION: ${COLOR_END}"
	$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	if ! $CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT 2> $TMP"err"; then
		printf "${COLOR_RED_B}❌ KO";
		echo ;
		printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}";
		echo ;
		printf "${COLOR_YELLOW_B}Do you want to see compile error output? [y] or [n]: ";
		printf "${COLOR_PURPLE_B}";
		read -n1 ANSWER;
		printf "${COLOR_END}";
		echo ;
		if [ $ANSWER = "y" ]; then
			echo ;
			printf "${COLOR_CYAN_B}#####################################################:"
			echo ;
			printf "${COLOR_CYAN}";
			cat $TMP"err";
			printf "${COLOR_CYAN_B}#####################################################:"
			echo ;
		fi
		rm -rf $TMP $NAME;
		exit 1;
	else
		printf "${COLOR_GREEN_B}✅ OK ${COLOR_PURPLE_B}| ${COLOR_END}";
	fi
	$CPP $CPP_FLAGS $PROTOTYPES -D LEAKS=$LEAKS_ON -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	if ! ./$NAME; then
		printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
		printf "${COLOR_PURPLE_B}";
		read -n1 ANSWER;
		printf "${COLOR_END}";
		echo ;
		if [ $ANSWER = "y" ]; then
			echo ;
			printf "${COLOR_CYAN}";
			cat $F1_SRC;
			echo ;
		fi
		rm -rf $TMP $NAME;
		exit 1;
	fi
	if [ $LEAKS_ON = "1" ]; then
		printf "${COLOR_PURPLE_B} |${COLOR_YELLOW_B} LEAKS: ${COLOR_END}"
		LEAKS=$(cat './Srcs/Tmp/leaks' | grep "0 leak");
		if [ -z "$LEAKS" ]; then
			printf "${COLOR_RED_B}❌ KO";
			echo ;
			printf "You have memory leaks.";
			echo ;
			printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}";
			echo ;
			printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}";
			echo ;
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN}";
				cat $F1_SRC;
				echo ;
			fi
			rm -rf $TMP $NAME;
			exit 1;
		else
			printf "${COLOR_GREEN_B}✅ OK${COLOR_END}";
		fi
	fi
	echo ;
done
echo ;

###############################################################################
#################################### STACK #####################################

for FUNC in "${STACK_FUNCTIONS[@]}"
do
	F1_SRC=$STACK"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:13}
	$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	if ! $CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT 2> $TMP"err"; then
		rm -rf $TMP $NAME;
		exit 1;
	fi
	$CPP $CPP_FLAGS $PROTOTYPES -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	./$NAME;
done
echo ;

###############################################################################
##################################### MAP ######################################

for FUNC in "${MAP_FUNCTIONS[@]}"
do
	F1_SRC=$MAP"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:11}
	$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	if ! $CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT 2> $TMP"err"; then
		rm -rf $TMP $NAME;
		exit 1;
	fi
	$CPP $CPP_FLAGS $PROTOTYPES -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	./$NAME;
done

###############################################################################

rm -rf $TMP $NAME;

exit 0;
