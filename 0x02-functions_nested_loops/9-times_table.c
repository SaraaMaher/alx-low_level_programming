#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int i, j, x;
for (i = 0 ; i < 10 ; i++)
{
putchar('0');
putchar(',');
putchar(' ');
for (j = 1 ; j < 10 ; j++)
{
x = i * j;
if ((x / 10) > 0)
{
putchar((x / 10) + '0');
}
else
putchar(' ');
putchar((x % 10) + '0');
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
