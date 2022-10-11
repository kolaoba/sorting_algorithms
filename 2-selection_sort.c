#include "sort.h"

/**
 * swap_nums - swap two numbers in array
 * @num1: first number
 * @num2: second number
 */
void swap_nums(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

/**
 * selection_sort - sort a doubly-linked list using selection sort
 * @array: array of numbers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_nums(array + i, min);
			print_array(array, size);
		}
	}
}
