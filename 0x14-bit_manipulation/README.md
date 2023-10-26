# Low-Level Programming - Bit Manipulation
This repository contains a collection of C programming projects related to bit manipulation and endianness. Bit manipulation is the act of altering individual bits within a number to achieve specific goals. Each project focuses on specific tasks related to bitwise operations and checking the endianness of a system.

| Project | Description | Source Code |
| ------- | ----------- | ----------- |
| **0. Binary to Unsigned Int** | Convert a binary number to an unsigned int. | [0-binary_to_uint.c](./0-binary_to_uint.c) |
| **1. Print Binary** | Print the binary representation of a number without using arrays or malloc. | [1-print_binary.c](./1-print_binary.c) |
| **2. Get Bit** | Get the value of a bit at a given index. | [2-get_bit.c](./2-get_bit.c) |
| **3. Set Bit** | Set the value of a bit to 1 at a given index. | [3-set_bit.c](./3-set_bit.c) |
| **4. Clear Bit** | Set the value of a bit to 0 at a given index. | [4-clear_bit.c](./4-clear_bit.c) |
| **5. Flip Bits** | Calculate the number of bits needed to flip to get from one number to another. | [5-flip_bits.c](./5-flip_bits.c) |
| **6. Endianness** | Check the endianness of the system (big endian or little endian). | [100-get_endianness.c](./100-get_endianness.c) |
| **7. Crackme3** | Find the password for a given program and save it in a file. | [101-password](./101-password) |

## Tasks Description
1. Convert Binary to Unsigned Int - Convert a binary number represented as a string to an unsigned int. The function handles invalid characters and NULL input.

2. Print Binary - Print the binary representation of a given number without using arrays, malloc, %, or / operators.

3. Get Bit - Retrieve the value of a bit at a specific index in a given number.

4. Set Bit - Set the value of a bit to 1 at a specified index in a given number.

5. Clear Bit - Clear (set to 0) a bit at a given index in a given number.

6. Flip Bits - Calculate the number of bits that need to be flipped to convert one number to another.

7. Endianness - Determine the endianness of the system, returning 0 for big-endian and 1 for little-endian.

8. Crackme3 - Find and save the password for a given program in the 101-password file.


## How to Compile and Run
For each project, you can compile the provided main file with the source code. For example:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o 0-binary_to_uint
./0-binary_to_uint
```

