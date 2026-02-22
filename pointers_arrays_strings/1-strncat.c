#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string where src will be appended
 * @src: source string to append to dest
 * @n: maximum number of characters to copy from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	/* Find the end of dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy at most n characters from src into dest */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add null terminator at the end */
	dest[i] = '\0';

	return (dest);
}
