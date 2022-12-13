#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: start
 *
 * Return: void
 */
void print_to_98(int n)
{
int i;
for (i = n ; i < 99 ; i++)
{
if ((i / 10) > 0)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
