# 0x13. C - More singly linked lists
## Introduction/Objective
* To know how to use linked lists
* To start to look for the right source of information without too much help

## General Requirements
* Allowed editors: **vi**, **vim**, **emacs**
* All files is compiled on **Ubuntu 20.04 LTS using gcc**, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
* All files ends with a new line
* There is a **README.md** file, at the root of the folder of the project
* Codes are compiled using the **Betty style**
* The only C standard library functions allowed are **malloc**, **free** and **exit**.
* Also allowed to use **_putchar**
* The prototypes of all your functions and the prototype of the function **_putchar** should be included in your header file called lists.h
* All header files were include guarded

## List of files and description:
| S/N   |       Files          |        Description  |
|:-----:|:--------------------:|:-------------------|
|1. | [0-print_listint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c) | A function that prints all the elements of a **listint_t** list. <ul><li>Return: the number of nodes</li><li>Format: see example</li><li>You are allowed to use printf</li></ul> |
|2.|[1-listint_len.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c) | A function that returns the number of elements in a linked **listint_t** list. |
|3. |[2-add_nodeint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c) |A function that adds a new node at the beginning of a **listint_t** list. <ul><li>Return: the address of the new element, or **NULL** if it failed</li></ul>|
|4.|[3-add_nodeint_end.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c) | A function that adds a new node at the end of a **listint_t** list. <ul><li>Return: the address of the new element, or **NULL** if it failed</li></ul>|
|5. |[4-free_listint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c) | A function that frees a **listint_t** list. |
|6. |[5-free_listint2.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c) | A function that frees a **listint_t** list. <ul><li>The function sets the **head** to **NULL**</li></ul> |
|7. |[6-pop_listint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c) | A function that deletes the head node of a **listint_t** linked list, and returns the head node’s data (n). <ul><li>if the linked list is empty return **0**</li></ul>|
|8. |[7-get_nodeint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/7-get_nodeint.c) | A function that returns the nth node of a **listint_t** linked list. <ul><li>where index is the **index** of the node, starting at **0**</li><li>if the node does not exist, return **NULL**</li></ul>|
|9. |[8-sum_listint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/8-sum_listint.c) | A function that returns the sum of all the data (n) of a **listint_t** linked list. <ul><li>if the list is empty, return **0**</li></ul> |
|10. |[9-insert_nodeint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/9-insert_nodeint.c) | A function that inserts a new node at a given position: <ul><li>where **idx** is the index of the list where the new node should be added. Index starts at **0**</li><li>Returns: the address of the new node, or **NULL** if it failed</li><li>if it is not possible to add the new node at index **idx**, do not add the new node and return **NULL**</li></ul>|
|11. |[10-delete_nodeint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/10-delete_nodeint.c) | A function that deletes the node at index index of a **listint_t** linked list: <ul><li>where **index** is the index of the node that should be deleted. Index starts at 0</li><li>Returns: **1** if it succeeded, **-1** if it failed</li></ul> |
|12. |[100-reverse_listint.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/100-reverse_listint.c) | A function that reverses a **listint_t** linked list: <ul><li>Returns: a pointer to the first node of the reversed list</li><li>You are not allowed to use more than 1 loop.</li><li>You are not allowed to use malloc, free or arrays</li><li>You can only declare a maximum of two variables in your function</li></ul> |
|13. |[101-print_listint_safe.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c) | A function that prints a **listint_t** linked list: <ul><li>Returns: the number of nodes in the list</li><li>This function can print lists with a loop</li><li>You should go through the list only once</li><li>If the function fails, exit the program with status 98</li><li>Output format: see example</li></ul>|
|14. |[102-free_listint_safe.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/102-free_listint_safe.c) | A function that frees a **listint_t** list: <ul><li>This function can free lists with a loop</li><li>You should go though the list only once</li><li>Returns: the size of the list that was free’d</li><li>The function sets the **head** to **NULL**</li></ul> |
|15. |[103-find_loop.c](https://github.com/Dikachis/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/103-find_loop.c) | A function that finds the loop in a linked list: <ul><li>Returns: The address of the node where the loop starts, or **NULL** if there is no loop</li><li>You are not allowed to use **malloc**, **free** or arrays</li><li>You can only declare a maximum of two variables in your function</li></ul>|

[Alx](https://alx-intranet.hbtn.io/projects/230#task-1003) | [Firefox Pocket](https://getpocket.com/my-list?src=navbar)
