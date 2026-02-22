#include "main.h"
/**
 * _strncpy - copies a string, up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

for (; i < n; i++)
{
dest[i] = '\0';
}
	return (dest);
}
