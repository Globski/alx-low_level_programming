#!/bin/bash

# Get self
echo -e
echo -e "Fetching script.c file ..."
echo -e

curl https://raw.githubusercontent.com/globski/alx-low_level_programming/master/0x14-bit_manipulation/pass-gen.c -o passwd.c

sed -i 's/"test.h"/<stdio.h>/g' passwd.c
sed -i '2i #include <stdlib.h>' passwd.c

# Compile password file

gcc passwd.c -o r.wd

# Generate password doc

./r.wd

echo -e
echo -e "Cleanup ..."

rm *.wd passwd.c

# clear
echo -e "Created 101-password successfully"
ls 101-pas*

echo -e
echo -e "Run ./crackme3 \`cat 101-password\` to verify"

echo -e
