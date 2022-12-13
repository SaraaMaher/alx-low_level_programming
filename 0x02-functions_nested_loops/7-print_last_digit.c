#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number
 *
 * Return: digit
 */
int print_last_digit(int n)
{
int x;
x = (n % 10);
if (x < 0)
x = (x * -1);
putchar('0' + x);
return (x);
}
