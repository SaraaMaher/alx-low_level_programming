#include <stdio.h>
/**
 * main - print all possible comb of 2 
 *
 * Return: Always 0.
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
putchar(',');
}
}
putchar('\n');
return (0);
}
