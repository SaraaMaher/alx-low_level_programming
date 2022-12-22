#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: char *
 */
char *cap_string(char *s)
{
int i, j;
i = 0;
char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
while (s[++i] != '\0')
{
j = 0;
while (c[j] != '\0')
{
if (s[i - 1] == c[j] && (s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;
j++;
}
}
return (s);
}
