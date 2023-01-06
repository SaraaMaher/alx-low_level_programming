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
int i, j, r;
r = 0;
if (argc <= 1)
printf("0\n");
else
{
for (i = 1; i < argc ; i++)
{
for (j = 0; argv[i][j] ; j++)
{
if (isnumber(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
r += atoi(argv[i]);
}
printf("%d\n", r);
}
}
return (0);
}
