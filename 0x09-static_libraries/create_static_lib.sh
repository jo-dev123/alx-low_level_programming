#!/bin/bash
gcc -Werror -Wall -pedantic -std=gnu89 -Wextra -c *.c
ar -rcs liball.a *.o
