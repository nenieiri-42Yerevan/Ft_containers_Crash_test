#!/bin/bash

. ./config.sh

#make fclean
#make Vdef=$vector Sdef=$stack Mdef=$map
#./crash_test

flags="-Wall -Wextra -Werror -I./";
defines="-D NS=ft -D NS_TEST=ft_test -D V=\"$vector\" -D S=\"$stack\" -D M=\"$map\"";
tmp="Tmp";

mkdir -p $tmp;
c++ $flags $defines -c ./Srcs/Vector/vec_example1.cpp -o ./Tmp/vec_exmple1_ft.o;

rm -rf $tmp;
