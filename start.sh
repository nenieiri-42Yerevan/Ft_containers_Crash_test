#!/bin/bash

. ./config.sh

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

CPP='c++';
CPP_FLAGS='-Wall -Wextra -Werror -I./';
defines_ft="-D NS=ft -D NS_TEST=ft_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";
defines_std="-D NS=std -D NS_TEST=std_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";

NAME="crash_test";

SRCS="./Srcs/";
TMP="./Tmp/";

mkdir -p $TMP;

VECTOR=$SRCS"Vector/";
STACK=$SRCS"Srack/";
MAP=$SRCS"Map/";

RUN_SRC=$SRCS"run.cpp";
RUN_OBJ=$TMP"run.o";
$CPP $CPP_FLAGS $defines_ft -o $RUN_OBJ -c $RUN_SRC;

MAIN_SRC=$SRCS"main.cpp";
MAIN_OBJ=$TMP"main.o";

LEN=${#VECTOR_FUNCTIONS[@]}
for FUNC in "${VECTOR_FUNCTIONS[@]}"
do
	F1_SRC=$VECTOR"$FUNC".cpp;
	F1_OBJ_STD=$TMP"$FUNC"_std.o;
	F1_OBJ_FT=$TMP"$FUNC"_ft.o;

	N=${FUNC:11}
	$CPP $CPP_FLAGS $defines_std -c $F1_SRC -o $F1_OBJ_STD;
	$CPP $CPP_FLAGS $defines_ft -c $F1_SRC -o $F1_OBJ_FT;
	$CPP $CPP_FLAGS $defines_ft -D NUM=$N -D F1='std_test::'$FUNC -D F2='ft_test::'$FUNC -c $MAIN_SRC -o $MAIN_OBJ;

	$CPP -o $NAME $F1_OBJ_STD $F1_OBJ_FT $RUN_OBJ $MAIN_OBJ;

	./$NAME;
done

rm -rf $TMP $NAME;
