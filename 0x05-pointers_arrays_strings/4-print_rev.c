#include <stdio.h>
/**
 * print_rev - at prints a string, in reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
int l = strlen(s);
char *start, *end;
start = s;
end = s + l - 1;
while (l != 0)
{
putchar(*end);
end--;
}
putchar('\n');
}
