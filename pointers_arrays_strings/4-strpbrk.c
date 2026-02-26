#include "main.h"
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the bytes to match
 *
 * Return: pointer to the first matching byte in s,
 * or NULL if no byte matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	i = 0;

	while (s[i] != '\0')
	{
		n = 0;

		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
				return (s + i);

			n++;
		}

		i++;
	}

	return (NULL);
}
