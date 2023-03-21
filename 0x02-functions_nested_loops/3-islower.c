#include "main.h"
/**
 * _islower - checks for lower case letters
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (96 < c < 123)
		return (1);

	else 
		return (0);
}
