#!/bin/bash

. ./config.sh

#make fclean
#make Vdef=$vector Sdef=$stack Mdef=$map
#./crash_test

flags="-Wall -Wextra -Werror -I./";
defines_ft="-D NS=ft -D NS_TEST=ft_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";
defines_std="-D NS=std -D NS_TEST=std_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";
tmp="Tmp";

mkdir -p $tmp;

c++ $flags $defines_ft -c ./Srcs/run.cpp -o ./Tmp/run.o;

F1_SRC="./Srcs/Vector/vec_example1.cpp"
F1_OBJ_STD="./Tmp/vec_example1_std.o"
F1_OBJ_FT="./Tmp/vec_example1_ft.o"

c++ $flags $defines_std -c $F1_SRC -o $F1_OBJ_STD;
c++ $flags $defines_ft -c $F1_SRC -o $F1_OBJ_FT;
c++ $flags $defines_ft -D NUM=1 -D F1='std_test::vec_example1' -D F2='ft_test::vec_example1' -c ./Srcs/main.cpp -o ./Tmp/main.o;

c++ -o crash_test $F1_OBJ_STD $F1_OBJ_FT ./Tmp/main.o ./Tmp/run.o;

./crash_test

rm -rf $tmp crash_test;
