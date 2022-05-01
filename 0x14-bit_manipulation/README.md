# 0x14. C - Bit manipulation

# ![alt text](https://github.com/Dikachis/alx-low_level_programming/blob/master/image/bitwise.png?raw=true)

## Introduction/Objective
* To look for the right source of information without too much help
* To know how to manipulate bits and use bitwise operators

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is a **README.md** file, at the root of the folder of the project
* Codes are compiled using the **Betty style**
* The only C standard library functions allowed are **malloc**, **free** and **exit**.
* Also allowed to use **_putchar**
* The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called main.h
* All header files were include guarded

## List of files and description:
| S/N   |       Files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|1. | [0-binary_to_uint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c) | A function that converts a binary number to an **unsigned int**. <ul><li>Prototype: **unsigned int binary_to_uint(const char *b);**</li><li>where **b** is pointing to a string of **0** and **1** chars</li><li>Return: the converted number, or **0** if<ul><li>there is one or more chars in the string **b** that is not **0** or **1**</li><li>**b** is **NULL**</li></li></ul> |
|2.|[1-print_binary.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c) | A function that prints the binary representation of a number. <ul><li>Prototype: **void print_binary(unsigned long int n);**</li><li>Format: see example</li><li>You are not allowed to use arrays</li><li>You are not allowed to use **malloc**</li><li>You are not allowed to use the % or / operators</li></ul>|
|3. |[2-get_bit.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c) |A function that returns the value of a bit at a given index. <ul><li>Prototype: **int get_bit(unsigned long int n, unsigned int index);** </li><li>where index is the index, starting from 0 of the bit you want to get</li><li>Returns: the value of the bit at index index or -1 if an error occured</li></ul>|
|4.|[3-set_bit.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c) |A function that sets the value of a bit to **1** at a given index. <ul><li>Prototype: **int set_bit(unsigned long int *n, unsigned int index);** </li><li>where index is the **index**, starting from **0** of the bit you want to set</li><li>Returns: 1 if it worked, or -1 if an error occurred</li></ul>|
|5. |[4-clear_bit.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c) | A function that sets the value of a bit to **0** at a given index. <ul><li>Prototype: **int clear_bit(unsigned long int *n, unsigned int index);** </li><li>where index is the index, starting from 0 of the bit you want to set</li><li>Returns: 1 if it worked, or -1 if an error occurred</li></ul> |
|6. |[5-flip_bits.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c) | A  function that returns the number of bits you would need to flip to get from one number to another. <ul><li>Prototype: **unsigned int flip_bits(unsigned long int n, unsigned long int m);** </li><li>You are not allowed to use the % or / operators</li></ul> |
|7. |[100-get_endianness.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-get_endianness.c) | A function that checks the endianness.<ul><li>Prototype: **int get_endianness(void);** </li><li>Returns: **0** if big endian, **1** if little endian</li></ul>|
|8. |[101-password](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/101-password) | To find the password for [this program.](https://github.com/holbertonschool/0x13.c) <ul><li>Save the password in the file [101-password](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x14-bit_manipulation/101-password)</li><li>Your file should contain the exact password, no new line, no extra space</li></ul>|

[Alx](https://alx-intranet.hbtn.io/projects/232#task-1022) | [Firefox Pocket](https://getpocket.com/my-list?src=navbar)
