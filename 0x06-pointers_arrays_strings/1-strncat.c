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
while (*src != '\0' && i < n)
{
*dest = *src;
src++;
dest++;
i++;
}
return (dest);
}
