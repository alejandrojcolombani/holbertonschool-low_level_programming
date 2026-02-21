#include "main.h"

/**
 * _atoi - Converts a string to an integer, taking into account
 *        + and - signs preceding the number.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = (result * 10) + sign * (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (result);
}
