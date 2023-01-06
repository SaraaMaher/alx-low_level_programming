#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer
 * Return: void
 */
int _atoi(char *s)
{
int i, sign;
unsigned int r = 0;
sign = 1;
i = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
for (; s[i] != 0 ; i++)
{
if (s[i] >= '0' && s[i] <= '9')
r = (r * 10) + s[i] - '0';
else
break;
}
r = (r *sign);
return (r);
}
