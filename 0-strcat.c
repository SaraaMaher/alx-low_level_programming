#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int l;
for (l = 0 ; dest[l] != '\0' ; l++)
{
}
while (*src != '\0')
{
dest[l] = *src;
l++;
src++;
}
dest[l] = '\0';
return (dest);
}
