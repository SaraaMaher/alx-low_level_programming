#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
int l, i = 0;
char v;
for (l = 0 ; s[l] != '\0' ; l++)
{
}
l--;
while (l > i)
{
v = s + l;
*s[l] = *s[i];
*s[i] = v;
i++;
l--;
}
}

