# 0x10. C - Variadic functions
## Introduction/Objective
* To know variadic functions are
* To know how to use **va_start**, **va_arg** and **va_end** macros
* To know why and how to use the **const** type qualifier

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is a **README.md** file, at the root of the folder of the project
* Codes are compiled using the **Betty style**
* The only C standard library functions allowed are **malloc**, **free** and **exit**.
* The use of the following macros are allowed: **va_start**, **va_arg** and **va_end**
* The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called **variadic_functions.h**
* All header files were include guarded

## List of files and description:
| S/N   |       files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|  1.   | [0-sum_them_all.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c) | A function that returns the sum of all its parameters.  |
|  2.   |[1-print_numbers.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c) | A function that prints numbers, followed by a new line.  |
|  3.   |[2-print_strings.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c) |A function that prints strings, followed by a new line.|
|  4.   |[3-print_all.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c) | A function that prints anything. <ul><li>Prototype: **void print_all(const char * const format, ...);**</li><li>where **format** is a list of types of arguments passed to the function <ul><li>**c: char**</li><li>**i: integer**</li><li>**f: float**</li><li>**s: char * **(if the string is NULL, print **(nil)** instead</li><li>any other char should be ignored</li><li>see example</li></ul><li>You are not allowed to use **for**, **goto**, ternary operator, **else**, **do ... while**</li><li>You can use a maximum of<ul><li>2 **while** loops</li><li>2 **if**</li></ul><li>You can declare a maximum of **9** variables</li><li>You are allowed to use **printf**</li><li>Print a new line at the end of your function</li></ul> |

[alx](https://alx-intranet.hbtn.io/projects/227)

[Firefox pocket](https://getpocket.com/my-list?src=navbar)
