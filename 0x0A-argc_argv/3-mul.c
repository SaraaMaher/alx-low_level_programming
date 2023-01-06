#include <stdio.h>
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
int a = argv[1] + 0;
int b = argv[2] + 0;
int r = a * b;
printf("%d\n", r);
}
return (0);
}
