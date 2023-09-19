#!bin/bash

gcc -c *.c
ar rcs liball.a *.o
ar rc liball.a *.o
ranlib liball.a
