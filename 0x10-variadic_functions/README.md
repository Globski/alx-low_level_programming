# Low-Level Programming - Variadic Functions

This repository contains C programs that demonstrate the use of variadic functions. Variadic functions are functions in C that can accept a variable number of arguments. Each program demonstrates the use of variadic functions for different purposes.

| Project | Description | Source Code |
|---------|-------------|-------------|
| **0: Sum Them All** | Write a function that returns the sum of all its parameters. If `n == 0`, return 0. | [Link](./0-sum_them_all.c) |
| **1: Print Numbers** | Write a function that prints numbers, followed by a new line. If `separator` is NULL, don't print it. Print a new line at the end of your function. | [Link](./1-print_numbers.c) |
| **2: Print Strings** | Write a function that prints strings, followed by a new line. If `separator` is NULL, don't print it. If a string is NULL, print (nil) instead. Print a new line at the end of your function. | [Link](./2-print_strings.c) |
| **3: Print All** | Write a function that prints anything. `format` is a list of types of arguments passed to the function. Supported format characters include: `c` for characters, `i` for integers, `f` for floats, `s` for strings (if NULL, print (nil) instead). Any other char should be ignored. You are not allowed to use for, goto, ternary operator, else, do ... while. Print a new line at the end of your function. | [Link](./3-print_all.c) |

## Compilation and Execution

Each program can be compiled with GCC (GNU Compiler Collection). For example, to compile `0-sum_them_all.c`, you can use:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
