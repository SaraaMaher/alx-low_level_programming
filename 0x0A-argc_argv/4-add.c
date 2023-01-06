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
int i, r = 0;
if (argc <= 1)
printf("0\n");
else
{
for (i = 1; i < argc - 1; i++)
{
if (isnumber(argv[i]))
r += atoi(argv[i])
else
{
printf("Error\n");
return (1);
}
}
}
return (0);
}
