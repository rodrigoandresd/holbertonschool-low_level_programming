#!/bin/bash
#script that creates a static library called liball.a from all the .c files

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a

