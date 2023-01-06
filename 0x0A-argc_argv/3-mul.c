#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul
 * @argc: size
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
printf("Error\n");
else
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int r = a * b;
printf("%d\n", r);
}
return (0);
}
