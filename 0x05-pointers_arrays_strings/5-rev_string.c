#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
int  l;
char *o, *r, ch;
o = s;
for (l = 0 ; s[l] != '\0' ; l++)
{
}
r = s + l - 1;
while (r > o)
{
ch = *o;
*o = *r;
*r = ch;
o++;
r--;
}
}
