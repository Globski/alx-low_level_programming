
# Low-Level Programming & Algorithm - File I/O

This repository contains C programs for various file I/O operations. Each task is described below, along with the corresponding source code and filenames.

| Task                             | Description                                                        | Filename                        | Source Code          |
| -------------------------------- | ------------------------------------------------------------------ | ----------------------------      | -------------------------          |
| 0. Tread lightly, she is near     | Read a text file and print its content to the standard output.   | 0-read_textfile.c                 | [Source Code](./0-read_textfile.c) |
| 1. Under the snow                 | Create a file with specified permissions and write content to it. | 1-create_file.c                   | [Source Code](./1-create_file.c) |
| 2. Speak gently, she can hear    | Append text to the end of an existing file.                       | 2-append_text_to_file.c            | [Source Code](./2-append_text_to_file.c) |
| 3. cp                            | Copy the content of one file to another, with error handling.     | 3-cp.c                           | [Source Code](./3-cp.c) |
| 4. elf                           | Display information from the ELF header of an ELF file.           | 100-elf_header.c                  | [Source Code](./100-elf_header.c) |

## Usage

For each task, you can compile and run the C programs to perform the specified file I/O operations.

To compile a program, use the following format:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <task_file.c> -o <output_binary>
```
For example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
./a <text_file_name>
```
