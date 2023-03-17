#include <stdio.h>
/**
 * main - 3-digit combinations
 * i, j, k: integers
 *
 * Description: prints 3-digit combinations (only the smallest) e.g 023 not 320
 * Return: return value is zero
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);

					if (i != 7)
					{
						putchar(44);
						putchar(32);
					}
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
