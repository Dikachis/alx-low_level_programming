# 0x0F. C - Function pointers
## Introduction/Objective
* To know function pointers and how to use them
* To know what a function pointer exactly hold
* To know what a function pointer point to in the virtual memory

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is a **README.md** file, at the root of the folder of the project
* Codes are compiled using the **Betty style**
* The only C standard library functions allowed are **malloc**, **free** and **exit**.
* The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called function_pointers.h
* All header files were include guarded

## List of files and description:
| S/N   |       files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|  1.   | [0-print_name.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c) | A function that prints a name.  |
|  2.   |[1-array_iterator.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c) | A function that executes a function given as a parameter on each element of an array.  |
|  3.   |[2-int_index.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c) |A function that searches for an integer.|
|  4.   |[3-main.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c) | A program that performs simple operations passed in as parameters.|
|  5.   |[3-get_op_func.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c) | This selects the correct function from [3-op_functions.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c) to perform the operation asked by the user.|
|  6.   |[3-calc.h](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h) | This is the header file for [3-main.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c), [3-op_functions.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c), and [3-get_op_func.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c).|
|  7.   |[3-op_functions.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c) | It contains the following 5 functions: <ul><li>**int op_add(int a, int b)** - where **op_add** returns the sum of **a** and **b**.</li><li>**int op_sub(int a, int b**) - where **op_sub** returns the difference of **a** and **b**.</li><li>**int op_mul(int a, int b)** - where **op_mul** returns the product of **a** and **b**.</li><li>**int op_div(int a, int b)** - where **op_div** returns the result of the division of **a** by **b**.</li><li>**int op_mod(int a, int b)** - where **op_mod** returns the remainder of the division of **a** by **b**.</li></ul>|
|  8.   |[100-main_opcodes.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x0F-function_pointers/100-main_opcodes.c) | This prints the opcodes of its own main function up to a specified number of bytes.|

[alx](https://alx-intranet.hbtn.io/projects/226)
[Firefox pocket](https://getpocket.com/my-list?src=navbar)
