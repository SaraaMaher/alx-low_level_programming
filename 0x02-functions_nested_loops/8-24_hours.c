#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
int h, m;
for (h = 0 ; h < 24 ; h++)
{
for (m = 0 ; m < 60 ; m++)
{
putchar((h / 10) + '0');
putchar((h % 10) + '0');
putchar(':');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
putchar('\n');
}
}
}
