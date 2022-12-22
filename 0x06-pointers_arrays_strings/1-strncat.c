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
int l = 0;
while (src[l] != '\0' && l < n)
{
dest[i++] = src[l];
l++;
}
dest[i + l] = '\0';
return (dest);
}
