#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase
 * @s: string to convert
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
i++;
}
return (s);
}
