#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive num
 * @argc: size
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i, j, r = 0;
if (argc <= 1)
printf("0\n");
else
{
for (i = 1; i < argc - 1; i++)
{
for (j = 0; argv[i][j] ; j++)
{
if (!isnumber(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
r += atoi(argv[i]);
}
}
}
return (0);
}
