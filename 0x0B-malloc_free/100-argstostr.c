#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: int
 * @av: array
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
int i, ch, j;
char *s;
ch = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0 ; i < ac ; i++)
{
if (av[i] == NULL)
return (NULL);
for (j = 0 ; av[i][j] ; j++)
ch++;
}
s = malloc(sizeof(char) * ch + 1);
if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0 ; i < ch ; i++)
{
j = 0;
while (av[i][j])
{
s[i] = av[i][j];
}
av[i][j] = '\n';
}
s[i] = '\0';
return (s);
}
