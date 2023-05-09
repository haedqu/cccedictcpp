#!/bin/sh
cd "$(dirname "$0")"
g++ -O -c src/*.cpp
g++ *.o -o cccedictcpp
