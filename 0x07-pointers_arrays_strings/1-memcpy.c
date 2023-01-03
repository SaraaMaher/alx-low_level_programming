/**
 * _memcpy - copies memory area
 * @dest: pointer destination
 * @src: pointer source
 * @n: size
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
while (*src != '\0' && i != n)
{
*dest = *src;
dest++;
src++;
i++;
}
return (src);
}
