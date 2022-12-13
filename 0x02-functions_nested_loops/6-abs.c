#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 *
 * @n: number
 *
 * Return: absolute of n
 */
int _abs(int n)
{
return (n * ((n > 0) - (n < 0)));
}
