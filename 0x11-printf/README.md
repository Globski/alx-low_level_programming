# Printf Project - Custom `printf` Function

![License](https://img.shields.io/badge/license-MIT-blue.svg)

## Table of Contents

- [Introduction](#introduction)
- [Objectives](#objectives)
- [Project Overview](#project-overview)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Format Specifiers](#format-specifiers)
- [Advanced Features](#advanced-features)
- [Contributors](#contributors)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

Welcome to the Printf Project, where we implement a custom `printf` function in C. The project follows the rules and guidelines set forth by Holberton School and focuses on recreating the behavior of the standard C library `printf` function.

## Objectives

- Implement a custom `printf` function in C.
- Handle various format specifiers and custom conversions.
- Optimize buffer usage for efficient printing.
  
## Project Overview

This project includes the following tasks:

| Project | Description | Source Code |
| --- | --- | --- |
| **Task 0** | Write a function that produces output according to a format. | [Task 0 Source](task_0.c) |
| **Task 1** | Handle the conversion specifiers `%d` and `%i`. | [Task 1 Source](task_1.c) |
| **Task 2** | Implement the custom conversion specifier `%b` for binary. | [Task 2 Source](task_2.c) |
| **Task 3** | Handle conversion specifiers `%u`, `%o`, `%x`, and `%X`. | [Task 3 Source](task_3.c) |
| **Task 4** | Optimize buffer usage. | [Task 4 Source](task_4.c) |
| **Task 5** | Add the custom specifier `%S` for non-printable characters. | [Task 5 Source](task_5.c) |
| **Task 6** | Handle the conversion specifier `%p`. | [Task 6 Source](task_6.c) |
| **Task 7** | Handle flag characters: `+`, space, `#`. | [Task 7 Source](task_7.c) |
| **Task 8** | Handle length modifiers: `l` and `h`. | [Task 8 Source](task_8.c) |
| **Task 9** | Handle field width. | [Task 9 Source](task_9.c) |
| **Task 10** | Handle precision. | [Task 10 Source](task_10.c) |
| **Task 11** | Handle the 0 flag character. | [Task 11 Source](task_11.c) |
| **Task 12** | Handle the - flag character. | [Task 12 Source](task_12.c) |
| **Task 13** | Implement the custom specifier `%r` for reversed strings. | [Task 13 Source](task_13.c) |
| **Task 14** | Add the custom specifier `%R` for ROT13. | [Task 14 Source](task_14.c) |
| **Task 15** | All the above options work well together. | [Task 15 Source](task_15.c) |

## Getting Started

To use our custom `printf` function, you can clone this repository:

```bash
$ git clone https://github.com/your-username/printf.git
```

After cloning, you can compile and link your code with our printf function using the provided Makefile.

## Usage
To use the printf function, include the holberton.h header and call _printf with your desired format string and arguments. Here's a basic example:

```c
#include "holberton.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return (0);
}
```

## Format Specifiers
Our custom printf function supports the following format specifiers:

- %c: Character
- %s: String
- %%: Percent
- %d and %i: Decimal and Integer
- %b: Binary (Custom)
- %u: Unsigned Integer
- %o: Octal
- %x and %X: Hexadecimal

## Advanced Features
Our custom printf function includes several advanced features:

- Handling flag characters: +, space, and #
- Handling length modifiers: l and h
- Handling field width
- Handling precision
- Handling flag character 0
- Handling flag character -
- Custom specifier for non-printable characters %S
- Custom specifier for reversed string %r
- Custom specifier for ROT13 %R

## Contributors

This project is maintained by the following contributors:

- [Ogunsemore Gloria](https://github.com/Globski)
- [Emmanuel Ifediora](https://github.com/Manuelshub)

## License

This project is open source and available under the [MIT License](LICENSE).

## Acknowledgments 🙏

The `_printf` function emulates the functionality of the C standard library function `printf`. 
We would like to express our sincere gratitude to [ALX Afica](https://www.alxafrica.com/) for providing the educational environment and guidance that enabled the development of this project.

ALX Afica is a renowned full-stack software engineering program that prepares students for successful careers in the tech industry through project-based peer learning and a dedication to excellence. The project was created as part of the ALX Afica curriculum, and we want to acknowledge the institution for its invaluable support and resources.

For more information about ALX Afica and its programs, please visit this [link](https://www.alxafrica.com/).

