#include "main.h"
/**
 * times_table - prints 9 times table
 * 
 *
 * Return: no return value
 */
void times_table(void)
{
	int i, j = 0;
	int ij, m, t;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);

		for (j = 0; j < 10; j++)
		{
			ij = i * j;
			if (ij < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(48 + ij);
			}
			else if (ij >= 10)
			{
				m = ij % 10;
				t = ij / 10;
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(48 + t);
				_putchar(48 + m);
			}
		}
		_putchar(10);
	}
}
