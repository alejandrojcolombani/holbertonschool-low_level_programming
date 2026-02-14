#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
*
* Return: return alway 0
*
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
i++;
_putchar('\n');
}
}
