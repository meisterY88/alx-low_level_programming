#include "main.h"
/**
 * _islower - checks for lower case letters
 * Parameter: c is the ASCII code
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);

	else
		return (0);
}
