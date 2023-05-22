#!/bin/bash
echo -e '#include <stdio.h>\n\nint rand() { return 42; }\n\nint rand_r(unsigned int *seed) { return 42; }' > libfake.c
gcc -shared -o libfake.so libfake.c

LD_PRELOAD=$PWD/libfake.so ./gm 9 8 10 24 75 9

