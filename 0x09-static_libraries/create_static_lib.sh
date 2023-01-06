#!/bin/bash

# Create an empty archive file
ar rcs liball.a

# Iterate over all .c files in the current directory
for file in *.c; do
  # Compile the .c file into an object file
  gcc -c "$file"
  # Add the object file to the library
  ar rcs liball.a "${file%.c}.o"
done
