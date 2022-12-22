#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: char *
 */
char *leet(char *s)
{
int i, j = 0;
char letters[] = "aAeEoOtTlL";
char num[] = "4433007711";
while (s[j] != '\0')
{
i = 0;
while (letters[i] != '\0')
{
if (s[j] == letters[i])
s[j] = num[i];
i++;
}
j++;
}
return (s);
}
