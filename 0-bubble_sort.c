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
 * bubble_sort - sort array of integers in ascending order
 * @array: array of numbers to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, len = size;
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (idx = 0; idx < len - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap_nums(array + idx, array + idx + 1);
				print_array(array, size);
				swapped = false;
			}
		}
		len --;
	}
}
