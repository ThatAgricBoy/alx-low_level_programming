#!/bin/bash

for file in *.c; do
gcc -fPIC -c "$file"
done
gcc -shared -o libdynamic.so *.o
rm *.o
