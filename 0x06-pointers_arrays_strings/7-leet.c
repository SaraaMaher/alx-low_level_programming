#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: char *
 */
char *leet(char *s)
{
int i;
char letters[] = "aAeEoOtTlL";
char num[] = "4433007711";
while (*s != '\0')
{
i = 0;
while (i < 10)
{
if (*s == letters[i])
*s = num[i];
i++;
}
s++;
}
return (s);
}
