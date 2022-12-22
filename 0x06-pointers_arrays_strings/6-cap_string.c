#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: char *
 */
char *cap_string(char *s)
{
int i = 0;
if ((s[0] >= 97 && s[0] <= 122))
s[0] = s[0] - 32;
while (s[++i])
{
while (!(s[i] >= 'a' && s[i] <= 'z'))
i++;

if (s[i - 1] == ' ' ||
s[i - 1] == ',' ||
s[i - 1] == '\n' ||
s[i - 1] == '\t' ||
s[i - 1] == ';' ||
s[i - 1] == '.' ||
s[i - 1] == '!' ||
s[i - 1] == '?' ||
s[i - 1] == '"' ||
s[i - 1] == '(' ||
s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '}')
s[i] -= 32;
}
return (s);
}
