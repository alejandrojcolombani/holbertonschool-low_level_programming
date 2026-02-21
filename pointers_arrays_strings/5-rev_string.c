#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: pointer to the string
 */
void rev_string(char *s)
{
int i;
int j;
int tmp;
i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
for (j = 0; j < i; j++, i--)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
}
}
