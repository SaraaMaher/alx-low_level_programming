/**
 * _strstr - ocates a substring.
 * @haystack: char *
 * @needle: char *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
int i;
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
while (haystack[i] == needle[i])
{
if (needle[i + 1] == '\0')
return (haystack);
i++;
}
}
haystack++;
}
return (0);
}
