#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i, sign, res;

	sign = 1;
	res = 0;

	/* Find first digit, tracking sign changes before it */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
			break;
	}

	/* Convert consecutive digits */
	for (; s[i] >= '0' && s[i] <= '9'; i++)
		res = (res * 10) + (s[i] - '0');

	return (res * sign);
}
