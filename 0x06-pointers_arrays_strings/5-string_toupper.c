#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer
 * Return: char *
 */
char *string_toupper(char *s)
{
char *r;
while (*s != '\0')
{
if (*s >= 'A' && *s <= 'Z')
*r = *s;
else
*r = *s - 32;
r++;
s++;
}
*r = '\0';
return (r);
}
