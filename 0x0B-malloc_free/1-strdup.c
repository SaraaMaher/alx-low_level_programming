#include <stdlib.h>
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
int i;
char *s;
if (str == NULL)
return (NULL);

s = malloc(sizeof(str));
for (i = 0 ; str[i] ; i++)
s[i] = str[i];

return (s);
}
