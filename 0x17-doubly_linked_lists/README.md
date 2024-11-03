# Alx Low-Level Programming - C Doubly linked lists

## Description
This project focuses on implementing and manipulating doubly linked lists in C. You will learn about the structure of doubly linked lists and the various functions available to manage them. It includes various functions to manipulate and manage the list, such as adding, deleting, traversing, searching for nodes within the list, and printing nodes. the project will cover best practices in programming. By the end, you'll have a solid understanding of how to work with doubly linked lists and their basic operations.

## Project Structure

| Task Number | Description                                                           | Source Code                       |
|-------------|-----------------------------------------------------------------------|-----------------------------------|
| 1           | Print list                                                           | [0-print_dlistint.c](0-print_dlistint.c) |
| 2           | List length                                                          | [1-dlistint_len.c](1-dlistint_len.c)       |
| 3           | Add node at the beginning                                            | [2-add_dnodeint.c](2-add_dnodeint.c)       |
| 4           | Add node at the end                                                  | [3-add_dnodeint_end.c](3-add_dnodeint_end.c) |
| 5           | Free list                                                            | [4-free_dlistint.c](4-free_dlistint.c)     |
| 6           | Get node at index                                                    | [5-get_dnodeint.c](5-get_dnodeint.c)       |
| 7           | Sum list                                                             | [6-sum_dlistint.c](6-sum_dlistint.c)       |
| 8           | Insert at index                                                      | [7-insert_dnodeint.c](7-insert_dnodeint.c) |
| 9           | Delete at index                                                      | [8-delete_dnodeint.c](8-delete_dnodeint.c) |
| 10          | Find the password for crackme4                                       | [100-password](100-password)                  |
| 11          | Find the largest palindrome made from the product of two 3-digit numbers | [102-result](102-result)                   |
| 12          | Write a keygen for crackme5                                         | [103-keygen.c](103-keygen.c)                  |

## Environment
- Compiler: GCC
- Language: C
- Operating System: Linux Ubuntu 20.04 LTS

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- All your header files should be include guarded

## Learning Objectives
By the end of this project, you should be able to:
- Explain what a doubly linked list is.
- Use doubly linked lists effectively in C.
- Implement various operations (insertion, deletion, etc.) with doubly linked lists.
- Seek out the right information resources independently.

## Prototypes Table

| Prototype                                              |
|--------------------------------------------------------|
| `size_t print_dlistint(const dlistint_t *h);`        |
| `size_t dlistint_len(const dlistint_t *h);`          |
| `dlistint_t *add_dnodeint(dlistint_t **head, const int n);` |
| `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);` |
| `void free_dlistint(dlistint_t *head);`               |
| `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);` |
| `int sum_dlistint(dlistint_t *head);`                 |
| `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);` |
| `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);` | 


## How to Use

Compile the source files with a C compiler and run the compiled program to test the functionalities.

To compile the project, use:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o dlist
```

### Data Structure
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

- Ensure to free any allocated memory to prevent memory leaks.
- Refer to the provided `main.c` files for testing each functionality.


## Additional Notes

1. **Insertion**
   - Adding new nodes to the list.
   - Insert a new node at the beginning, end, or a specified position in the list.
   
2. **Deletion**
   - Remove a node from the list.
   
3. **Traversal**
   - Traverse the list in both directions (forward and backward).
   - Navigating through the list to access nodes.

4. **Search**
   - Find a node with a specific value.
   - Finding specific nodes within the list.

5. **Other utilities**
   - Functions to create, free, and display the list.

- **What a Doubly Linked List Is**: A doubly linked list is a data structure consisting of nodes, where each node contains three parts: a data element, a pointer to the next node, and a pointer to the previous node. This allows traversal in both directions.

- **Using Doubly Linked Lists Effectively in C**: In C, you can use structures to define a node for a doubly linked list. Effective use involves managing memory allocation, ensuring proper linkage between nodes, and implementing functions for common operations.

- **Implementing Various Operations**: Common operations on doubly linked lists include:
  - **Insertion**: Adding nodes at the beginning, end, or specific positions.
  - **Deletion**: Removing nodes by value or position.
  - **Traversal**: Iterating through the list to access or print nodes.

- **Seeking Information Resources Independently**: To enhance your understanding, utilize online tutorials, documentation, and programming forums. Websites like GeeksforGeeks, Stack Overflow, and educational platforms offer valuable resources for learning about doubly linked lists and C programming.

## Tasks
1. **Print list**
   - Write a function that prints all the elements of a `dlistint_t` list.
   - Prototype: `size_t print_dlistint(const dlistint_t *h);`
   - Return: the number of nodes
   - Format: see example
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

2. **List length**
   - Write a function that returns the number of elements in a linked `dlistint_t` list.
   - Prototype: `size_t dlistint_len(const dlistint_t *h);`
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x17. Doubly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
```
3. **Add node**
   - Write a function that adds a new node at the beginning of a `dlistint_t` list.
   - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
   - Return: the address of the new element, or NULL if it failed
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x17. Doubly linked lists$
```
4. **Add node at the end**
   - Write a function that adds a new node at the end of a `dlistint_t` list.
   - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
   - Return: the address of the new element, or NULL if it failed
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
```
5. **Free list**
   - Write a function that frees a `dlistint_t` list.
   - Prototype: `void free_dlistint(dlistint_t *head);`
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$
```
6. **Get node at index**
   - Write a function that returns the nth node of a `dlistint_t` linked list.
   - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
   - Return: NULL if the node does not exist
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 5-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/0x17. Doubly linked lists$
```
7. **Sum list**
   - Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
   - Prototype: `int sum_dlistint(dlistint_t *head);`
   - Return: 0 if the list is empty
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 6-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x17. Doubly linked lists$
```
8. **Insert at index**
   - Write a function that inserts a new node at a given position.
   - Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
   - Return: the address of the new node, or NULL if it failed
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 7-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/0x17. Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$
```
9. **Delete at index**
   - Write a function that deletes the node at index index of a `dlistint_t` linked list.
   - Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
   - Return: 1 if it succeeded, -1 if it failed
```c
julien@ubuntu:~/0x17. Doubly linked lists$ cat 8-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/0x17. Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/0x17. Doubly linked lists$
```
10. **Crackme4 (advanced)**
    - Find the password for crackme4.
    - Save the password in the file `100-password`.
```c

```
11. **Palindromes (advanced)**
    - Find the largest palindrome made from the product of two 3-digit numbers.
    - Save the result in the file `102-result`.
```c

```
12. **Crackme5 (advanced)**
    - Write a keygen for crackme5.
    - Your keygen should print a valid key for the username.
```c
julien@ubuntu:~/0x17$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
julien@ubuntu:~/0x17$ ./crackme5 julien javascript
Segmentation fault (core dumped)
julien@ubuntu:~/0x17$ ./crackme5 julien `./keygen5 julien`
Congrats!
julien@ubuntu:~/0x17$ 
```
