# alx-low_level_programming

This repository contains solutions for the low-level programming and data structures tasks from the ALX Software Engineering program.

## Table of Contents

1. [0x13. More Singly Linked Lists](#0x13-more-singly-linked-lists)
2. [Compilation](#compilation)
3. [Usage](#usage)
4. [Tasks](#tasks)
5. [Advanced Tasks](#advanced-tasks)
6. [Author](#author)

## 0x13. More Singly Linked Lists

This directory contains C programs that demonstrate various operations on singly linked lists.

## Compilation

Each C program can be compiled using the `gcc` compiler with specific flags. Here's an example of how to compile a program:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <source_file.c> -o <output_executable>
```
## Usage
You can run the compiled programs by executing the corresponding executable. For example:

```bash
./a
```

## Tasks
| Task | Filename | Description | Prototype | Return | Source Code |
|------|----------|-------------|-----------|--------|-------------|
| Task 0 | [0-print_listint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/0-print_listint.c) | Write a function that prints all the elements of a listint_t list. | `size_t print_listint(const listint_t *h);` | The number of nodes. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/0-print_listint.c) |
| Task 1 | [1-listint_len.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/1-listint_len.c) | Write a function that returns the number of elements in a listint_t list. | `size_t listint_len(const listint_t *h);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/1-listint_len.c) |
| Task 2 | [2-add_nodeint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/2-add_nodeint.c) | Write a function that adds a new node at the beginning of a listint_t list. | `listint_t *add_nodeint(listint_t **head, const int n);` | The address of the new element, or NULL if it failed. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/2-add_nodeint.c) |
| Task 3 | [3-add_nodeint_end.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/3-add_nodeint_end.c) | Write a function that adds a new node at the end of a listint_t list. | `listint_t *add_nodeint_end(listint_t **head, const int n);` | The address of the new element, or NULL if it failed. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/3-add_nodeint_end.c) |
| Task 4 | [4-free_listint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/4-free_listint.c) | Write a function that frees a listint_t list. | `void free_listint(listint_t *head);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/4-free_listint.c) |
| Task 5 | [5-free_listint2.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/5-free_listint2.c) | Write a function that frees a listint_t list and sets the head to NULL. | `void free_listint2(listint_t **head);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/5-free_listint2.c) |
| Task 6 | [6-pop_listint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/6-pop_listint.c) | Write a function that deletes the head node of a listint_t linked list and returns the head node's data (n). | `int pop_listint(listint_t **head);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/6-pop_listint.c) |
| Task 7 | [7-get_nodeint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/7-get_nodeint.c) | Write a function that returns the nth node of a listint_t linked list. | `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/7-get_nodeint.c) |
| Task 8 | [8-sum_listint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/8-sum_listint.c) | Write a function that returns the sum of all the data (n) of a listint_t linked list. | `int sum_listint(listint_t *head);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/8-sum_listint.c) |
| Task 9 | [9-insert_nodeint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/9-insert_nodeint.c) | Write a function that inserts a new node at a given position in a listint_t list. | `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);` | The address of the new node, or NULL if it failed. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/9-insert_nodeint.c) |
| Task 10 | [10-delete_nodeint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/10-delete_nodeint.c) | Write a function that deletes the node at a specified index in a listint_t list. | `int delete_nodeint_at_index(listint_t **head, unsigned int index);` | 1 if it succeeded, -1 if it failed. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/10-delete_nodeint.c) |

## Advanced Tasks
| Task | Filename | Description | Prototype | Return | Source Code |
|------|----------|-------------|-----------|--------|-------------|
| Task 11 | [100-reverse_listint.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/100-reverse_listint.c) | Write a function that reverses a listint_t linked list. | `listint_t *reverse_listint(listint_t **head);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/100-reverse_listint.c) |
| Task 12 | [101-print_listint_safe.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/101-print_listint_safe.c) | Write a function that prints a listint_t linked list. It can print lists with a loop. | `size_t print_listint_safe(const listint_t *head);` | The number of nodes in the list. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/101-print_listint_safe.c) |
| Task 13 | [102-free_listint_safe.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/102-free_listint_safe.c) | Write a function that frees a listint_t list. It can free lists with a loop. | `size_t free_listint_safe(listint_t **h);` | The size of the list that was free'd. | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/102-free_listint_safe.c) |
| Task 14 | [103-find_loop.c](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/103-find_loop.c) | Write a function that finds the loop in a linked list. | `listint_t *find_listint_loop(listint_t *head);` |  | [View Code](https://github.com/yourusername/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/103-find_loop.c) |


## Author
[Ogunsemore Gloria](./globski)
