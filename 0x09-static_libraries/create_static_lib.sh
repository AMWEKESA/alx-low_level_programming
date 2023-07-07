#!/bin/bash
gcc -c -Wall -Wextra -werror -pedantic *.c
ar -rc liball.a *.o
