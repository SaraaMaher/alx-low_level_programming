#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
while (n != 0)
{
putchar((n % 10) + '0');
n = n / 10;
}
putchar('\n');
}
