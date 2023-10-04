# Low-Level Programming - Malloc and Free

This repository contains C programs that demonstrate the use of dynamic memory allocation and deallocation using `malloc` and `free` functions.

| Task | Description | Source Code |
| ---- | ----------- | ----------- |
| **Task 0:** Create Array | Write a function that creates an array of characters and initializes it with a specific character. Returns NULL if size is 0. | [0-create_array.c](0-create_array.c) |
| **Task 1:** String Duplicate | Write a function that returns a pointer to a newly allocated space in memory, containing a copy of the string given as a parameter. Returns NULL if `str` is NULL. | [1-strdup.c](1-strdup.c) |
| **Task 2:** String Concatenation | Write a function that concatenates two strings. The returned pointer should point to a newly allocated space in memory. Treats NULL as an empty string. Returns NULL on failure. | [2-str_concat.c](2-str_concat.c) |
| **Task 3:** Allocate Grid | Write a function that returns a pointer to a 2-dimensional array of integers, with each element initialized to 0. Returns NULL on failure or if `width` or `height` is 0 or negative. | [3-alloc_grid.c](3-alloc_grid.c) |
| **Task 4:** Free Grid | Write a function that frees a 2-dimensional grid previously created by `alloc_grid`. | [4-free_grid.c](4-free_grid.c) |
| **Task 5 (Advanced):** Concatenate Arguments | Write a function that concatenates all the arguments of your program. Returns NULL if `ac` is 0 or `av` is NULL. | [100-argstostr.c](100-argstostr.c) |
| **Task 6 (Advanced):** Split String into Words | Write a function that splits a string into words. Returns a pointer to an array of strings (words). The last element of the returned array is NULL. Returns NULL if `str` is NULL or an empty string. | [101-strtow.c](101-strtow.c) |

## How to Use

Each task is implemented in its respective C file. To compile and run a specific task, use the following commands:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o <output_file> <source_file>  # Compile
./<output_file>  # Run

