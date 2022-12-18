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

VECTOR_ON=0;
STACK_ON=0;
MAP_ON=0;

if [ $# -eq 0 ]; then
	VECTOR_ON=1;
	STACK_ON=2;
	MAP_ON=3;
fi

for flag in "$@"
do
    case "${flag}" in
        "-v")
			VECTOR_ON=1;;
        "-s")
			STACK_ON=1;;
        "-m")
			MAP_ON=1;;
    esac
done

if [ $VECTOR_ON = "0" ]; then
	vector="";
fi
if [ $STACK_ON = "0" ]; then
	stack="";
fi
if [ $MAP_ON = "0" ]; then
	map="";
fi

if ! test -z "$vector"; then
	V_DEF="-D V=\"$vector\""
fi
if ! test -z "$stack"; then
	S_DEF="-D S=\"$stack\""
fi
if ! test -z "$map"; then
	M_DEF="-D M=\"$map\""
fi
if $(test -z "$vector") && $(test -z "$stack") && $(test -z "$map"); then
	printf "${COLOR_YELLOW_B}Nothing to do.${COLOR_END}\n"
	exit 0;
fi

defines_ft="-D NS=ft -D NS_TEST=ft_test $V_DEF $S_DEF $M_DEF";
defines_std="-D NS=std -D NS_TEST=std_test $V_DEF $S_DEF $M_DEF";

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
#					"vec_example5"
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
					"vec_example28"
				 );

for FUNC in "${VECTOR_FUNCTIONS[@]}"
do
	VECT_PROTOTYPES+="const std::string $FUNC(double &_time); ";
done

################################################################################
#################################### STACK #####################################

STACK=$SRCS"Stack/";
STACK_FUNCTIONS=(
					"stack_example1"
					"stack_example2"
					"stack_example3"
					"stack_example4"
					"stack_example5"
					"stack_example6"
					"stack_example7"
					"stack_example8"
					"stack_example9"
					"stack_example10"
					"stack_example11"
					"stack_example12"
					"stack_example13"
					"stack_example14"
				);

for FUNC in "${STACK_FUNCTIONS[@]}"
do
	STACK_PROTOTYPES+="const std::string $FUNC(double &_time); ";
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
				"map_example23"
				"map_example24"
				"map_example25"
				"map_example26"
				"map_example27"
				"map_example28"
				"map_example29"
				"map_example30"
				"map_example31"
				"map_example32"
				"map_example33"
				"map_example34"
				"map_example35"
				"map_example36"
				"map_example37"
				"map_example38"
				"map_example39"
				"map_example40"
				"map_example41"
				"map_example42"
				"map_example43"
				"map_example44"
				"map_example45"
				"map_example46"
				"map_example47"
				"map_example48"
				"map_example49"
				"map_example50"
				"map_example51"
				"map_example52"
			  );

for FUNC in "${MAP_FUNCTIONS[@]}"
do
	MAP_PROTOTYPES+="const std::string $FUNC(double &_time); ";
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

$CPP $CPP_FLAGS $PROTOTYPES -o $RUN_OBJ -c $RUN_SRC;

################################################################################
################################### INTRO ######################################
printf "${COLOR_BLUE_B}"
printf "\b####################################################################################\n";
printf "#                                                                                  #\n";
printf "#   ░█████╗░██████╗░░█████╗░░██████╗██╗░░██╗  ████████╗███████╗░██████╗████████╗   #\n";
printf "#   ██╔══██╗██╔══██╗██╔══██╗██╔════╝██║░░██║  ╚══██╔══╝██╔════╝██╔════╝╚══██╔══╝   #\n";
printf "#   ██║░░╚═╝██████╔╝███████║╚█████╗░███████║  ░░░██║░░░█████╗░░╚█████╗░░░░██║░░░   #\n";
printf "#   ██║░░██╗██╔══██╗██╔══██║░╚═══██╗██╔══██║  ░░░██║░░░██╔══╝░░░╚═══██╗░░░██║░░░   #\n";
printf "#   ╚█████╔╝██║░░██║██║░░██║██████╔╝██║░░██║  ░░░██║░░░███████╗██████╔╝░░░██║░░░   #\n";
printf "#   ░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝  ░░░╚═╝░░░╚══════╝╚═════╝░░░░╚═╝░░░   #\n";
printf "#                                                                                  #\n";
printf "#   42 Yerevan | ft_containers crash test | Author: Volodya Ismailyan (vismaily)   #\n";
printf "#                                                                                  #\n";
printf "####################################################################################\n";

LEAKS_COMMAND=$(which leaks);
if [ -z "$LEAKS_COMMAND" ]; then
	LEAKS_COMMAND=$(which valgrind);
	if [ -z "$LEAKS_COMMAND" ]; then
		printf "\n${COLOR_RED_B}'leaks' or 'valgrind' command doesn't found,"
		printf " so leaks will not be checked. ${COLOR_END}\n"
		LEAKS_ON=0;
	else
		LEAKS_ON=2;
	fi
else
	LEAKS_ON=1;
fi

if ! test -z "$vector"; then
	if ! test -e "$vector"; then
		printf "${COLOR_RED_B}Error: Vector: file does not found: $vector.\n";
		printf "       Correct path in config.sh and try again.\n"
		exit 1;
	else
		printf "\n${COLOR_GREEN_B}Vector: file found.";
	fi
fi

if ! test -z "$stack"; then
	if ! test -e "$stack"; then
		printf "${COLOR_RED_B}Error: Stack: file does not found: $stack.\n";
		printf "       Correct path in config.sh and try again.\n"
		exit 1;
	else
		printf "\n${COLOR_GREEN_B}Stack:  file found.";
	fi
fi

if ! test -z "$map"; then
	if ! test -e "$map"; then
		printf "${COLOR_RED_B}Error: Map: file does not found: $map.\n";
		printf "       Correct path in config.sh and try again.\n"
		exit 1;
	else
		printf "\n${COLOR_GREEN_B}Map:    file found.";
	fi
fi

################################################################################
################################### VECTOR #####################################

if ! test -z "$vector"; then
	printf "\n\n${COLOR_BLUE_B}"
	printf "\b####################################################################################\n";
	printf "#                                      VECTOR                                      #\n";
	printf "####################################################################################\n";
	for FUNC in "${VECTOR_FUNCTIONS[@]}"
	do
		F1_SRC=$VECTOR"$FUNC".cpp;
		F1_OBJ_STD=$TMP"$FUNC"_std.o;
		F1_OBJ_FT=$TMP"$FUNC"_ft.o;

		N=${FUNC:11}
		printf "\n${COLOR_PURPLE_B}Case ";
		if (($N < 10)); then
			echo -n " ";
		fi
		printf "$N:${COLOR_YELLOW_B} COMPILATION: ${COLOR_END}"
		if ! $CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT 2> $TMP"err"; then
			printf "${COLOR_RED_B}❌ KO\n";
			printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}\n";
			printf "${COLOR_YELLOW_B}Do you want to see compile error output? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}\n";
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN_B}\b####################################################################################\n"
				printf "${COLOR_CYAN}";
				cat $TMP"err";
				printf "${COLOR_CYAN_B}\b####################################################################################\n"
			fi
			rm -rf $TMP $NAME;
			exit 1;
		else
			$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
			printf "${COLOR_GREEN_B}✅ OK ";
		fi
		$CPP $CPP_FLAGS $PROTOTYPES -D LEAKS=$LEAKS_ON -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

		$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

		if ! ./$NAME; then
			printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}\n";
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN}\b";
				cat $F1_SRC;
				echo ;
			fi
			rm -rf $TMP $NAME;
			exit 1;
		fi
		if [ $LEAKS_ON = "1" ] || [ $LEAKS_ON = "2" ]; then
			printf "${COLOR_PURPLE_B} |${COLOR_YELLOW_B} LEAKS: ${COLOR_END}"
			if [ $LEAKS_ON = "1"  ]; then
				LEAKS=$(cat "$TMP"leaks | grep "0 leak");
			else
				valgrind --leak-check=full ./$NAME &> "$TMP"leaks;
				LEAKS=$(cat "$TMP"leaks | grep "no leaks are possible");
			fi
			if test -z "$LEAKS"; then
				printf "${COLOR_RED_B}❌ KO\n";
				printf "You have memory leaks.\n";
				printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}\n";
				printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
				printf "${COLOR_PURPLE_B}";
				read -n1 ANSWER;
				printf "${COLOR_END}\n";
				if [ $ANSWER = "y" ]; then
					echo ;
					printf "${COLOR_CYAN}\b";
					cat $F1_SRC;
					echo ;
				fi
				rm -rf $TMP $NAME;
				exit 1;
			else
				printf "${COLOR_GREEN_B}✅ OK${COLOR_END}";
			fi
		fi
	done
fi

###############################################################################
#################################### STACK #####################################

if ! test -z "$stack"; then
	printf "\n\n${COLOR_BLUE_B}"
	printf "\b####################################################################################\n";
	printf "#                                      STACK                                       #\n";
	printf "####################################################################################\n";
	for FUNC in "${STACK_FUNCTIONS[@]}"
	do
		F1_SRC=$STACK"$FUNC".cpp;
		F1_OBJ_STD=$TMP"$FUNC"_std.o;
		F1_OBJ_FT=$TMP"$FUNC"_ft.o;

		N=${FUNC:13}
		printf "\n${COLOR_PURPLE_B}Case ";
		if (($N < 10)); then
			echo -n " ";
		fi
		printf "$N:${COLOR_YELLOW_B} COMPILATION: ${COLOR_END}"
		if ! $CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT 2> $TMP"err"; then
			printf "${COLOR_RED_B}❌ KO\n";
			printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}\n";
			printf "${COLOR_YELLOW_B}Do you want to see compile error output? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}\n";
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN_B}\b####################################################################################\n"
				printf "${COLOR_CYAN}";
				cat $TMP"err";
				printf "${COLOR_CYAN_B}\b####################################################################################\n"
			fi
			rm -rf $TMP $NAME;
			exit 1;
		else
			$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
			printf "${COLOR_GREEN_B}✅ OK ";
		fi
		$CPP $CPP_FLAGS $PROTOTYPES -D LEAKS=$LEAKS_ON -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

		$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

		if ! ./$NAME; then
			printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}\n";
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN}\b";
				cat $F1_SRC;
				echo ;
			fi
			rm -rf $TMP $NAME;
			exit 1;
		fi
		if [ $LEAKS_ON = "1" ] || [ $LEAKS_ON = "2" ]; then
			printf "${COLOR_PURPLE_B} |${COLOR_YELLOW_B} LEAKS: ${COLOR_END}"
			if [ $LEAKS_ON = "1"  ]; then
				LEAKS=$(cat "$TMP"leaks | grep "0 leak");
			else
				valgrind --leak-check=full ./$NAME &> "$TMP"leaks;
				LEAKS=$(cat "$TMP"leaks | grep "no leaks are possible");
			fi
			if test -z "$LEAKS"; then
				printf "${COLOR_RED_B}❌ KO\n";
				printf "You have memory leaks.\n";
				printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}\n";
				printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
				printf "${COLOR_PURPLE_B}";
				read -n1 ANSWER;
				printf "${COLOR_END}\n";
				if [ $ANSWER = "y" ]; then
					echo ;
					printf "${COLOR_CYAN}\b";
					cat $F1_SRC;
					echo ;
				fi
				rm -rf $TMP $NAME;
				exit 1;
			else
				printf "${COLOR_GREEN_B}✅ OK${COLOR_END}";
			fi
		fi
	done
fi

###############################################################################
##################################### MAP ######################################

if ! test -z "$map"; then
	printf "\n\n${COLOR_BLUE_B}"
	printf "\b####################################################################################\n";
	printf "#                                       MAP                                        #\n";
	printf "####################################################################################\n";
	for FUNC in "${MAP_FUNCTIONS[@]}"
	do
		F1_SRC=$MAP"$FUNC".cpp;
		F1_OBJ_STD=$TMP"$FUNC"_std.o;
		F1_OBJ_FT=$TMP"$FUNC"_ft.o;

		N=${FUNC:11}
		printf "\n${COLOR_PURPLE_B}Case ";
		if (($N < 10)); then
			echo -n " ";
		fi
		printf "$N:${COLOR_YELLOW_B} COMPILATION: ${COLOR_END}"
		if ! $CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT 2> $TMP"err"; then
			printf "${COLOR_RED_B}❌ KO\n";
			printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}\n";
			printf "${COLOR_YELLOW_B}Do you want to see compile error output? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}";
			echo ;
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN_B}\b####################################################################################\n"
				printf "${COLOR_CYAN}";
				cat $TMP"err";
				printf "${COLOR_CYAN_B}\b####################################################################################\n"
			fi
			rm -rf $TMP $NAME;
			exit 1;
		else
			$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
			printf "${COLOR_GREEN_B}✅ OK ";
		fi
		$CPP $CPP_FLAGS $PROTOTYPES -D LEAKS=$LEAKS_ON -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

		$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

		if ! ./$NAME; then
			printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
			printf "${COLOR_PURPLE_B}";
			read -n1 ANSWER;
			printf "${COLOR_END}\n";
			if [ $ANSWER = "y" ]; then
				echo ;
				printf "${COLOR_CYAN}\b";
				cat $F1_SRC;
				echo ;
			fi
			rm -rf $TMP $NAME;
			exit 1;
		fi
		if [ $LEAKS_ON = "1" ] || [ $LEAKS_ON = "2" ]; then
			printf "${COLOR_PURPLE_B} |${COLOR_YELLOW_B} LEAKS: ${COLOR_END}"
			if [ $LEAKS_ON = "1"  ]; then
				LEAKS=$(cat "$TMP"leaks | grep "0 leak");
			else
				valgrind --leak-check=full ./$NAME &> "$TMP"leaks;
				LEAKS=$(cat "$TMP"leaks | grep "no leaks are possible");
			fi
			if test -z "$LEAKS"; then
				printf "${COLOR_RED_B}❌ KO\n";
				printf "You have memory leaks.\n";
				printf "Your grade is 0/100. Fix mistake and try again!!!${COLOR_END}\n";
				printf "${COLOR_YELLOW_B}Do you want to see error case? [y] or [n]: ";
				printf "${COLOR_PURPLE_B}";
				read -n1 ANSWER;
				printf "${COLOR_END}\n";
				if [ $ANSWER = "y" ]; then
					echo ;
					printf "${COLOR_CYAN}\b";
					cat $F1_SRC;
					echo ;
				fi
				rm -rf $TMP $NAME;
				exit 1;
			else
				printf "${COLOR_GREEN_B}✅ OK${COLOR_END}";
			fi
		fi
	done
fi

###############################################################################

rm -rf $TMP $NAME;
printf "\n\n${COLOR_YELLOW_B}Good job, babe.${COLOR_END}\n\n"

exit 0;
