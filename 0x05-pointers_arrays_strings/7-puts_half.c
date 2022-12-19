#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: pointer
 * Return: void
 */
void puts_half(char *str)
{
int l, i, n;
for (l = 0 ; str[l] != '\0' ; l++)
{
}
l--;
i = 0;
if (l % 2 == 0)
n = l / 2;
else
n = (l - 1) / 2;
while (str[i] != '\0')
{
if (i > n)
putchar(str[i]);
i++;
}
putchar('\n');
}
