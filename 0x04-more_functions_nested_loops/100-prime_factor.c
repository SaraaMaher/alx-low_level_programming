#include <stdio.h>
/**
 * main - largest factor
 * Return: 0
 */
int main(void)
{
long max, n = 612852475143;
for (max = 2 ; max < n ; max++)
{
if (n % max == 0)
n = n / max;
}
printf("%ld\n", max);
return (0);
}
