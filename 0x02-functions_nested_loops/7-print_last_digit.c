#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 *
 * Return: zero
 */
int print_last_digit(int n)
{
	n %= 10;
	_putchar(48 + n);
	
	return (n);
}
