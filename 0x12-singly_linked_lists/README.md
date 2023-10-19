# Low-Level Programming - Singly Linked Lists

This repository contains C programs that demonstrate the use of singly linked lists. Each program focuses on different aspects of singly linked lists, including printing, counting elements, adding nodes, and freeing the lists.

| Program | Description | Source Code |
|---------|-------------|-------------|
| **0: Print List** | Write a function that prints all the elements of a list_t list. If a string is NULL, print (nil). | [Link](./0-print_list.c) |
| **1: List Length** | Write a function that returns the number of elements in a list_t list. | [Link](./1-list_len.c) |
| **2: Add Node** | Write a function that adds a new node at the beginning of a list_t list. The string needs to be duplicated. | [Link](./2-add_node.c) |
| **3: Add Node at the End** | Write a function that adds a new node at the end of a list_t list. The string needs to be duplicated. | [Link](./3-add_node_end.c) |
| **4: Free List** | Write a function that frees a list_t list. | [Link](./4-free_list.c) |
| **5: The Hare and the Tortoise** | Write a function that prints a specific message before the main function is executed. | [Link](./5-main.c) |
| **6: Real Programmers Can Write Assembly Code** | Write a 64-bit program in assembly that prints "Hello, Holberton" followed by a new line using the printf function. | [Link](./6-hello_holberton.asm) |

## Compilation and Execution

Each program can be compiled using GCC (GNU Compiler Collection) for C programs or NASM (Netwide Assembler) for the assembly program. For example, to compile and execute `0-print_list.c`, you can use:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a
```

## For the assembly program:
```bash
nasm -f elf64 6-hello_holberton.asm
gcc -no-pie -std=gnu89 6-hello_holberton.o -o hello
./hello
```
