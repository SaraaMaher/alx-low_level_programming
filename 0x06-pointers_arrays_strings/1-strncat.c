/**
 * _strncat - concatenate
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
for (; dest[i] != '\0' ; i++)
{
}

while (*src != '\0' && i < n)
{
*dest[i] = *src;
src++;
i++;
}
dest[i] = '\0';
return (dest);
}
