#include "main.h"
/**
 * _islower - checks for lower case letters
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	int r;

	if (islower(c) != 0)
		return (1);

	else 
		return (0);
}
