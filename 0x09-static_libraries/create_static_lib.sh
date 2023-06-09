#!/bin/bash
gcc -c -fno-pic *.c
ar cr liball.a *.o
