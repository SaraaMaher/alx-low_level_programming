#include <stdio.h>
/**
 * main - print all comb of 2
 *
 * Return: ALways 0.
 */
int main(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = i + 1 ; j < 10 ; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
