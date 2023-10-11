# Low-Level Programming - Function Pointers

This repository contains C programs that demonstrate the use of function pointers and related concepts. The tasks in this project cover various aspects of working with function pointers in C.

| File                  | Description                                                | Source Code                                    |
|-----------------------|------------------------------------------------------------|-------------------------------------------------|
| 0-print_name.c        | Print a name using a function pointer.                    | [Link](./0-print_name.c)        |
| 1-array_iterator.c    | Execute a function on each element of an array.           | [Link](./1-array_iterator.c)    |
| 2-int_index.c         | Search for an integer in an array.                        | [Link](./2-int_index.c)         |
| 3-main.c              | Perform simple operations using function pointers.        | [Link](./3-main.c)              |
| 3-op_functions.c      | Contains operation functions for task 3.                  | [Link](./3-op_functions.c)      |
| 3-get_op_func.c       | Function to select the operation function.                | [Link](./3-get_op_func.c)       |
| 3-calc.h              | Header file with function prototypes and structs.         | [Link](./3-calc.h)              |
| 100-main_opcodes.c    | Print the opcodes of the `main` function.                | [Link](./100-main_opcodes.c)  |

## How to Use

Each source code file (`.c`) corresponds to a specific task in the project. You can compile these files separately to test and run each task. To compile a file, use the following command (replace `<file.c>` with the filename you want to compile):

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>

