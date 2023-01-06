/**
 * _memset - fills memory with a constant byte
 * @s: add
 * @b: const
 * @n: int
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (; i < n ; i++)
{
s[i] = b;

}
return (s);
}
