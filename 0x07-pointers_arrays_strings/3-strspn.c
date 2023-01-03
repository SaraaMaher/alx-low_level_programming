/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: uint
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int r = 0;
while (*s)
{
int i = 0;
for (; accept[i] ; i++)
{
if (*s == accept[i])
{
r++;
break;
}
}
s++;
}
return (r);
}
