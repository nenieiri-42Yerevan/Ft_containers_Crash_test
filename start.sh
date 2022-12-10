#!/bin/bash

. ./config.sh

make Vdef=$vector

./crash_test
