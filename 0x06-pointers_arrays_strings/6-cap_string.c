#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: char *
 */
char *cap_string(char *s)
{
int i = 0;
while (s[++i] != '\0')
{
while (s[i] >= 'A' && s[i] <= 'Z')
{
i++;
}
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
str[i] -= 32;
}
return (s);
}
