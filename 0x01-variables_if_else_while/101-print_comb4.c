#include <stdio.h>
/**
 * main - print comb 3
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, k;
for (i = 0 ; i < 10 ; i++)
{
for (j = i + 1 ; j < 10 ; j++)
{
for (k = j + 1 ; k < 10 ; k++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
if (i != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
