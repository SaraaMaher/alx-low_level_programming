#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
int l1, l2, i;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
l1 = strlen(s1);
l2 = strlen(s2);
s = malloc(sizeof(char) * (l1 + l2) +1);
if (s == NULL)
return (NULL);

for (i = 0 ; i < l1 ; i++)
s[i] = s1[i];

for (i = 0 ; i < l2 ; i++)
{
s[l1] = s2[i];
l1++;
}
return (s);
}
