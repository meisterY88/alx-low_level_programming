#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		for (c = 'a'; c <= 'z', c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
