#include <stdio.h>
/**
 *  _isalpha - check if letter or not
 *
 * @c: single letter
 *  Return: 1 if letter 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
