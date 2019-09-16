#!/bin/bash
wget -O inject.so https://github.com/dannyhollman/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/inject.so?raw=true
export LD_PRELOAD=$PWD/inject.so
