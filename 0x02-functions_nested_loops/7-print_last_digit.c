#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 *
 * Return: zero
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	n %= 10;
	_putchar(48 + n);

	return (n);
}
