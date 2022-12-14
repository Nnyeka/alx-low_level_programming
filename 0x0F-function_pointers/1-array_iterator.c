#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element
 * of an array
 * @array: array given
 * @size: size of the array
 * @action: pointer to function that prints
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int num = size;

	if (array && action)
	{
		for (i = 0; i < num; i++)
		{
			(action)(array[i]);
		}
	}
}
