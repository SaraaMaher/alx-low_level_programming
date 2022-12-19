#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to copy at
 * @src: pointer to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest);
}
