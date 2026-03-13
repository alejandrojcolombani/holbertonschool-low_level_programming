#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: array to iterate
 * @size: number of elements in the array
 * @action: pointer to function to apply to each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array && action)
		{
			action(array[i]);
		}
	}
}
