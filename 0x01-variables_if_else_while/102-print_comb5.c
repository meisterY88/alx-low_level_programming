#include <stdio.h>
/**
 * main - two two-digit numbers e.g 00 01, 00 02
 * i, j - integers
 *
 * Description - prints two two-digit numbers from 00 01 to 98 99
 * Return: return value is zero
 */
int main(void)
{
	int i, j, k, l = 0;
	int ij, kl;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					ij = (10 * i) + j;
					kl = (10 * k) + l;
					if (ij < kl)
					{ putchar(48 + i);
						putchar(48 + j);
						putchar(32);
						putchar(48 + k);
						putchar(48 + l); }
					if (ij != 98)
						{ putchar(44);
							putchar(32);
						}
				}
			}
		}}
	putchar('\n');

	return (0);
}
