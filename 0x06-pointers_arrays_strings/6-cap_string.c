#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: char *
 */
char *cap_string(char *s)
{
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
s++
while (*s != '\0')
{
bool begin = false;
if (begin == false && (*s != ' ' || *s != ',' || *s != ';'
|| *s != '.' || *s != '\n' || *s != '\t' || *s != '!'
|| *s != '?' || *s != '"' || *s != "(" || *s != ')' || *s != '{' || *s != '}'))
{
}
else if (begin == false)
{
begin = true;
}
else
{
if (*s >= 'a' && *s <= 'z')
*s = *s - 32;
}
s++;
}
return (s);
}
