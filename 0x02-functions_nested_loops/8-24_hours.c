#include "main.h"
/**
 * jack_bauer - prints every minute in a day
 *
 * Return: no return value
 */
void jack_bauer(void)
{
	int i, j, k, l = 0;
	int it;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					it = (i * 10) + j;

					if (it < 24)
					{
						_putchar(48 + i);
						_putchar(48 + j);
						_putchar(58);
						_putchar(48 + k);
						_putchar(48 + l);
						_putchar(10);
					}
				}
			}
		}
	}
}
