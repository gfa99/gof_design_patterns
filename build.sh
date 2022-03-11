#!/bin/bash

mkdir -p build
cd build

# cmake ..
cmake DENABLE_TESTS=ON ..

make 

cd -
