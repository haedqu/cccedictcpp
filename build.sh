#!/bin/sh
cd "$(dirname "$0")"
g++ -O3 -c src/*.cpp
g++ *.o -o cccedictcpp
