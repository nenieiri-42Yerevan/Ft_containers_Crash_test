#!/bin/bash

. ./config.sh

make fclean
make Vdef=$vector Sdef=$stack Mdef=$map

./crash_test
