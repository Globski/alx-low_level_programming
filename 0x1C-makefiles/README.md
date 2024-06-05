# Low-Level Programming - C Makefiles

## Project Description:
This project focuses on understanding Makefiles in C programming. It covers creating Makefiles to automate the compilation process, managing dependencies, and utilizing various rules and variables.

## Project Structure:
| Task                     | Description                                              | Source Code                                                   |
|--------------------------|----------------------------------------------------------|---------------------------------------------------------------|
| 0-Makefile               | Create your first Makefile.                              | [0-Makefile](./0-Makefile)               |
| 1-Makefile               | Create a Makefile with variables.                        | [1-Makefile](./1-Makefile)               |
| 2-Makefile               | Create a useful Makefile with dependencies.              | [2-Makefile](./2-Makefile)               |
| 3-Makefile               | Create a Makefile with additional rules and cleaning.     | [3-Makefile](./3-Makefile)               |
| 4-Makefile               | Implement a complete Makefile with compiler flags.       | [4-Makefile](./4-Makefile)               |
| 5-island_perimeter.py    | Implement a function to calculate island perimeter.       | [5-island_perimeter.py](./5-island_perimeter.py) |
| 100-Makefile             | Advanced Makefile implementation with specific rules.    | [100-Makefile](./100-Makefile)           |

## Environment:
- **Allowed Editors:** vi, vim, emacs
- **OS:** Ubuntu 20.04 LTS
- **Version of gcc:** 9.3.0
- **Version of make:** GNU Make 4.2.1

## Learning Objectives:
By completing this project, you will gain knowledge and skills in:
- Understanding make and Makefiles
- Utilizing rules, variables, and dependencies
- Implementing explicit and implicit rules
- Handling cleaning and recompilation processes
- Working with compiler flags

## Project Tasks

### Create Your First Makefile (Task 0)
Create a Makefile named 0-Makefile that does the following:

- Defines a rule named all.
- The all rule should compile the C files main.c and school.c into an executable named school.
When executed, it should produce the output as shown in the example.
variables: none
```python
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 
```

### Use Variables in Makefile (Task 1)
Create a Makefile named 1-Makefile that fulfills the following requirements:

- Defines variables CC and SRC.
- The variable CC should specify the compiler to be used.
- The variable SRC should specify the .c files to be compiled.
- Implements a rule named all that builds the executable school using the variables CC and SRC.

```python
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$
```

### Create a Useful Makefile (Task 2)
Develop a Makefile named 2-Makefile with the following features:

- Defines variables CC, SRC, OBJ, and NAME.
- The CC variable specifies the compiler to be used.
- The SRC variable specifies the .c files to be compiled.
- The OBJ variable specifies the .o files to be generated.
- The NAME variable specifies the name of the executable.
- Implements a rule named all that builds the executable school.
- The all rule should recompile only the updated source files.

```python
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ echo "/* School */" >> main.c
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$
```

### Advanced Makefile with Cleaning Rules (Task 3)
Develop a Makefile named 3-Makefile with the following functionalities:

- Defines variables CC, SRC, OBJ, NAME, and RM.
- Implements rules all, clean, oclean, fclean, and re.
- The all rule builds the executable school.
- The clean rule deletes Emacs and Vim temporary files along with the executable.
- The oclean rule deletes the object files.
- The fclean rule deletes Emacs and Vim temporary files, the executable, and the object files.
- The re rule forces recompilation of all source files.
- The cleaning rules should never fail.

```python
julien@ubuntu:~//0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 3-Makefile
```

### Complete Makefile with Compiler Flags (Task 4)
Develop a Makefile named 4-Makefile that includes the following features:

- Defines variables CC, SRC, OBJ, NAME, RM, and CFLAGS.
- The CFLAGS variable specifies compiler flags -Wall -Werror -Wextra -pedantic.
- Implements rules all, clean, oclean, fclean, and re.
- The all rule builds the executable school.
- The cleaning rules should never fail.

```python
julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$
```
### Implement Island Perimeter Function (Task 5)
Create a Python script named `5-island_perimeter.py` that implements a function to calculate the perimeter of an island described in a grid.

- The function `island_perimeter(grid)` should return the perimeter of the island.
- The grid is represented as a list of lists of integers, where:
  - `0` represents a water zone
  - `1` represents a land zone
- Each cell is a square with side length 1.
- Grid cells are connected horizontally/vertically (not diagonally).
- The grid is rectangular, with width and height not exceeding 100.
- The grid is completely surrounded by water, and there is only one island (or nothing).
- The island doesn’t have any "lakes" (water inside that isn’t connected to the water around the island).

Example:
```python
guillaume@ubuntu:~/0x1C$ cat 5-main.py
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

guillaume@ubuntu:~/0x1C$ 
guillaume@ubuntu:~/0x1C$ ./5-main.py
12
guillaume@ubuntu:~/0x1C$ 
```

### Advanced Makefile with Enhanced Functionality (Task 6)
Develop a Makefile named 100-Makefile with the following enhanced functionalities:

- Similar to Task 3 and Task 4 but with additional constraints and improvements.

**Name of the Executable and Rules:**
   - Name of the executable: `school`
   - Rules: `all`, `clean`, `fclean`, `oclean`, `re`

**Functionality of Rules:**
   - `all`: Builds the executable `school`.
   - `clean`: Deletes all Emacs and Vim temporary files along with the executable.
   - `oclean`: Deletes the object files.
   - `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files.
   - `re`: Forces recompilation of all source files.

**Variables:**
   - `CC`: Specifies the compiler to be used.
   - `SRC`: Specifies the .c files.
   - `OBJ`: Specifies the .o files.
   - `NAME`: Specifies the name of the executable.
   - `RM`: Specifies the program to delete files.
   - `CFLAGS`: Specifies compiler flags: `-Wall -Werror -Wextra -pedantic`

**Additional Constraints and Improvements:**
   - The `all` rule should recompile only the updated source files.
   - The cleaning rules (`clean`, `oclean`, `fclean`, `re`) should never fail.
   - Do not have a list of all the .o files.

```python
make -f 100-Makefile
```

## How to Use:
1. Clone the repository from [alx-low_level_programming](https://github.com/alx-low_level_programming).
2. Navigate to the directory `0x1C-makefiles`.
3. Choose the Makefile you want to run and execute the `make` command with the appropriate file name.
   Example: `make -f 0-Makefile`

