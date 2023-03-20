#!/bin/bash

for file in *.c; do
gcc -fPIC -c "$file"
done
gcc -shared -o liball.so *.o
rm *.o
