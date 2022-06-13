#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Dikachis/alx-low_level_programming/main/0x18-dynamic_libraries/dikamillion.so
export LD_PRELOAD="$PWD/../dikamillion.so"
