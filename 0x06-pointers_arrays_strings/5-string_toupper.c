#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer
 * Return: char *
 */
char *string_toupper(char *s)
{
int l = 0;
while (s[l] != '\0')
{
if (s[l] >= 'a' && s[l] <= 'z')
s[l] = s[l] - 32;
l++;
}
return (s);
}
