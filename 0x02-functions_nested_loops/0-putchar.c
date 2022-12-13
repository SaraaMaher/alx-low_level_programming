#include <stdio.h>
/**
 * main - print _putchar
 *
 * Return: ALways 0.
 */
int main(void)
{
char* ch="_putchar";
while (*ch)
{
putchar(*ch);
ch++;
}
putchar('\n');
return (0);
}
