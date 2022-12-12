#!/bin/bash

. ./config.sh

make fclean
make Vdef=$vector Sdef=$stack

./crash_test
