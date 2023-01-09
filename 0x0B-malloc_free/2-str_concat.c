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

l1 = strlen(s1);
l2 = strlen(s2);
s = malloc(sizeof(char) * (l1+l2) + 1);
if (s == NULL)
return (NULL);

for (i = 0 ; s1[i] ; i++)
s[i] = s1[i];

for (i = l1 ; s2[i] ; i++)
s[i] = s2[i];

return (s);
}
