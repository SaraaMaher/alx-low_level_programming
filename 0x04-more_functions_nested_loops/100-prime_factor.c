#include <stdio.h>
/**
 * main - largest factor
 * Return: 0
 */
int main(void)
{
int div = 2;
long max, n = 612852475143;
while (n != 0)
{
if (n % div != 0)
div++;
else
{
max = n;
n = n / div;
if (n == 1)
{
printf("%ld\n", max);
break;
}
}
return (0);
}
