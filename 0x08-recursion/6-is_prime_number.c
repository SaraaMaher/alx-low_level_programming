#include "main.h"
/**
 * is_prime_number - input integer is a prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (prime(n, n / 2));
}
/**
 * prime - recurse
 * @n: int
 * @i: int
 * Return: int
 */
int prime(int n, int i)
{
if (n % i == 0)
return (0);
if (i <= 1)
return (1);
else
return (prime(n, i - 1));
}
