#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	/* Determine sign */
	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
			break;

		i++;
	}

	/* Convert digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
