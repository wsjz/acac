#!/bin/bash
g++ -std=c++17 bitree/utils_test.cpp -lgtest -lpthread
./a.out
rm -f ./a.out