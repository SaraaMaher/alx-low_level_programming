#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer
 * Return: void
 */
int _atoi(char *s)
{
int r, i;
r = 0;
for (i = 0 ; s[i] != 0 ; i++)
{
r = r * 10 + s[i] - '0';
}
return (r);
}
