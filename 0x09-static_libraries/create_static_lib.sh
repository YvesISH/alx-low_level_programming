#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar ec liball.a *.o
