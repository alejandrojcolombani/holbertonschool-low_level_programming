#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to determine the last digit of
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
int lastn;
lastn = n % 10;
if (lastn < 0)
{
lastn = -lastn;
}
_putchar(lastn + '0');
return (lastn);
}
