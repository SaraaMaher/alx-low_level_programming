#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to copy at
 * @src: pointer to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0 ; src[i] != '\0' ; i++)
{
dest[i] = src[i];
dest++;
}
*dest = '\0';
return (dest);
}
