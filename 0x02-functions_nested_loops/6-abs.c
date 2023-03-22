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
		return (n);
	else
	{
		n *= -1;
		
		return(n);
	}
}
