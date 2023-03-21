#include "main.h"
/**
 * _isalpha - checks for alphabetic character, lower or uppercase
 * @c: c is the ASCII code
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
