/**
 * _strchr - locates a character in a string
 * @s: address
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
int i = 0;
char *r = '\0';
for (; s[i] != '\0' ; i++)
{
if (s[i] == c)
{
r = s[i];
}
}
return (r);
}
