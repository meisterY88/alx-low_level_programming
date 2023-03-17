#include <stdio.h>
/**
 * main - 2 digit combinations, e.g 01, 02 ...
 * i, j - integers
 *
 * Description: prints 2 digits combinations (only the smallest, e.g 23 not 32)
 * Return: return value is zero
 */
int main(void)
{
	int i = 0;
	int j = 1;

	for (i = 0; i < 9; i++)
	{
		for(j = 1; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar(48 + i);
				putchar(48 + j);

			if (i !=8 && i != j)
			{
				putchar(44);
				putchar(32);
			}
			
			}
		}
	}
	putchar('\n');

	return (0);
}
