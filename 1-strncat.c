/**
 * _strncat - concatenate
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
int i, l;
i = 0;
while (dest[i] != '\0')
{
i++;
}
l = 0;
while (src[l] != '\0' && l < n)
{
dest[i] = src[l];
l++;
i++;
}
return (dest);
}
