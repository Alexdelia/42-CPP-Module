#!/bin/bash

make re

echo ;

(set -x
./convert 0 && ./convert nan && ./convert 42.0f
)

echo ;

(set -x
./convert shit
./convert -1
./convert c
./convert +2147483647
./convert +92147483647
./convert -2147483648
./convert -9147483648
)

echo ;

(set -x
./convert +inf
./convert -inf
./convert nan
./convert +inff
./convert -inff
./convert nanf
)
