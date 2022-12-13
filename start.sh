#!/bin/bash

. ./config.sh

CPP='c++';
CPP_FLAGS='-Wall -Wextra -Werror -I./';
defines_ft="-D NS=ft -D NS_TEST=ft_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";
defines_std="-D NS=std -D NS_TEST=std_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";

NAME="crash_test";

SRCS="./Srcs/";
TMP="./Tmp/";

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

$CPP $CPP_FLAGS $PROTOTYPES -o $RUN_OBJ -c $RUN_SRC;

###############################################################################
################################### VECTOR #####################################

for FUNC in "${VECTOR_FUNCTIONS[@]}"
do
	F1_SRC=$VECTOR"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:11}
	$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	$CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT;
	$CPP $CPP_FLAGS $PROTOTYPES -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	./$NAME;
done

###############################################################################
echo ;
#################################### STACK #####################################

for FUNC in "${STACK_FUNCTIONS[@]}"
do
	F1_SRC=$STACK"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:13}
	$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	$CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT;
	$CPP $CPP_FLAGS $PROTOTYPES -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	./$NAME;
done

###############################################################################
echo ;
##################################### MAP ######################################

for FUNC in "${MAP_FUNCTIONS[@]}"
do
	F1_SRC=$MAP"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:11}
	$CPP $CPP_FLAGS $PROTOTYPES $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	$CPP $CPP_FLAGS $PROTOTYPES $defines_ft -c $F1_SRC -o $F1_OBJ_FT;
	$CPP $CPP_FLAGS $PROTOTYPES -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	./$NAME;
done

###############################################################################

rm -rf $TMP $NAME;
