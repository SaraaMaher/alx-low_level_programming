#include <stdlib.h>
#include <string.h>
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
int i, l;
char *s;
if (str == NULL)
return (NULL);

l = strlen(str);
s = malloc(sizeof(char) * l + 1);
if (s == NULL)
return (NULL);
for (i = 0 ; str[i] ; i++)
s[i] = str[i];

return (s);
}
