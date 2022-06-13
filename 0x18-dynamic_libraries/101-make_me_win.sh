#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Dikachis/alx-low_level_programming/blog/main/0x18-dynamic_libraries/randnum.so
export LD_PRELOAD="$PWD/../randnum.so"
