#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in the initial segment of s
 * consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n;

	n = 0;

	while (s[n] != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[n] == accept[i])
				break;
			i++;
		}

		if (accept[i] == '\0')
			break;

		n++;
	}

	return (n);
}
