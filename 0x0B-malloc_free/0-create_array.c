#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: int
 * @c: char
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
int i;
char *s = malloc(sizeof(c) * size);
for (i = 0 ; i < size ; i++)
s[i] = c;
return (s);
}
