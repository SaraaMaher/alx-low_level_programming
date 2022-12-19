#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
int i, l;
char *ordered, *reverse, ch;
ordered = s;
for (l = 0 ; s[l] != '\0' ; l++)
{
}
reverse = s + l - 1;
while (reversed > ordered)
{
ch = *ordered;
*ordered = *reversed;
*reversed = ch;
ordered++;
reversed--;
}
}
