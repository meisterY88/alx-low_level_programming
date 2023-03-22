#include "main.h"
/**
 * _abs - the absolute value of a number
 * @n: integer
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
		n *= 1;
	else
		n *= -1;
	return (n);
}
