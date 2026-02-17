#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int i;
for (i = 0; i <= 10; i++)
{
int j;
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
else
{
_putchar(j + '0');
}
}
_putchar('\n');
}
}
