#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -c -fPIC *.c
gcc -shared -o liball.so *.o
