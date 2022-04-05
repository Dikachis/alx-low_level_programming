# 0x0B. C - malloc, free
## Introduction/Objective
* The difference between automatic and dynamic allocation
* To know What **malloc** and **free** is, and how to use them
* To know Why and when to use **malloc**
* To know how to use **valgrind** to check for memory leak

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is a **README.md** file, at the root of the folder of the project
* Codes are compiled using the **Betty style**
* The prototypes of all the functions and the prototype of the function **_putchar** are included in the header file **main.h**
* The standard library is allowed.

## List of files required and more:
| S/N   |       files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|  1.   | [0-create_array.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c) |A function that creates an array of chars, and initializes it with a specific char.  |
|  2.   |[1-strdup.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c) | A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.  |
|  3.   |[2-str_concat.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c) | A function that concatenates two strings.|
|  4.   |[3-alloc_grid.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c) | A function that returns a pointer to a 2 dimensional array of integers.|
|  5.   |[4-free_grid.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c) | A function that frees a 2 dimensional grid previously created by your **alloc_grid** function.|
|  6.   |[5-argstostr.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/5-argstostr.c) | A function that concatenates all the arguments of the program.|
|  7.   |[100-strtow.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/100-strtow.c) | A function that splits a string into words.|
|  8.   |[main.h](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h) | Header file containing all the prototypes of the enlisted functions  |
