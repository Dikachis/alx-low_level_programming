# 0x09. C - Static libraries
## Introduction/Objective
* What static library is, how it works, how to create one, and how to use it
* Basic usage of **ar, ranlib, nm**


## General Requirements
* Allowed editors: vi, vim, emacs
* All files is compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All files ends with a new line
* There is a README.md file, at the root of the folder of the project
* Codes are compiled using the Betty style
* The prototypes of all the functions and the prototype of the function **_putchar** are included in the header file **main.h**
* The standard library is allowed.

## List of files required and more:
| S/N   |       files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|  1.   | [libmy.a](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x09-static_libraries/libmy.a) |Static library **libmy.a** whose files contains all the functions enlisted  |
|  2.   |[main.h](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x09-static_libraries/main.h) | Header file containing all the prototypes of the enlisted functions  |
|  3.   |[create_static_lib.sh](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh) | A script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.|
