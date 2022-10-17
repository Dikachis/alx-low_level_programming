#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to the first element of array to search
 * @size: number of the elements in the array
 * @value: value to search for
 * Return: index of the value else -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int resize = size, i = 0, result = -1;
	size_t start = 0;

	if (array == NULL)
		return (result);

	for ( ; i < resize; i += jump)
	{
		if (i == 0 && value < array[i])
			break;

		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
			start = (i - jump);
			result = search(array, start, i, value);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == array[resize - 1])
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
			start = (i);
			result = search(array, start, start, value);
			break;
		}

	}
	return (result);
}


/**
 * search - linearly search for a number in an array
 * @array: pointer to the first element of the array to search
 * @start: start of the array to search in
 * @end: end of the array
 * @value: target value to search for
 * Return: return the index the value is located else -1
 */

int search(int *array, size_t start, size_t end, int value)
{
	size_t i = start;

	for (; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (array[i]);
		}
	}
	return (-1);
}
