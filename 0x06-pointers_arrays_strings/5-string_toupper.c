#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer
 * Return: char *
 */
char *string_toupper(char *s)
{
while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
*s = *s - 32;
s++;
}
return (s);
}
