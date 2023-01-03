#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer destination
 * @src: pointer source
 * @n: size
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
