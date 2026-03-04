#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return: pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
