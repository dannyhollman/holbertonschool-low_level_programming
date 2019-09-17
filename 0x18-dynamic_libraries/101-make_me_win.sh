#!/bin/bash
wget -O /tmp/libinject.so https://github.com/dannyhollman/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libinject.so?raw=true
export LD_PRELOAD=/tmp/libinject.so
