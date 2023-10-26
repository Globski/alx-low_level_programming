#!/bin/bash

# Get pass script
echo -e
echo -e "Fetching start file ..."
echo -e

curl https://raw.githubusercontent.com/globski/alx-low_level_programming/master/0x14-bit_manipulation/start.sh -o start.wd

chmod u+x start.wd

./start.wd
