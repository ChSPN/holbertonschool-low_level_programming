# Linked List in C

This project contains exercises to practice manipulating linked lists in the C language. Each exercise is implemented in a separate file and includes a set of functions defined in the header file `lists.h`.

## Contents

0. **print_list**: Prints all elements of a linked list.
1. **list_len**: Returns the number of elements in a linked list.
2. **add_node**: Adds a new node at the beginning of a linked list.
3. **add_node_end**: Adds a new node at the end of a linked list.
4. **free_list**: Frees the memory allocated for a linked list.

## Instructions

Each exercise comes with its own source file (.c) and corresponding header file (.h). To test the functions, you can include the necessary source files in your main program and call the functions from there.

Make sure to compile all source files together when creating your executable program. You can use the following compilation commands:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o my_program main.c print_list.c list_len.c add_node.c add_node_end.c free_list.c


Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
When and why using linked lists vs arrays
How to build and use linked lists
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded