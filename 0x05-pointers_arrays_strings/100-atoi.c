#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer
 * Return: void
 */
int _atoi(char *s)
{
int r, i, sign;
r = 0;
sign = 1;
if (s[0] == '-')
{
i = 1;
sign = -1;
}
else
i = 0;
for (i ; s[i] != 0 ; i++)
{
if (s[i] >= '0' || s[i] <= '9')
r = (r * 10) + s[i] - '0';
}
r = (r *sign);
return (r);
}
