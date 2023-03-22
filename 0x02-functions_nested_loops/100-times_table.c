#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints times tables n
 * @n: integer not less than 0 and not greater than 15
 *
 * Return: no value returned
 */
void print_times_table(int n)
{
	int i, j = 0;
	int ij;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
		printf("0");
		for (j = 1; j < n; j++)
		{
			ij = i * j;

			if (ij < 10)
			{
				printf(",   %d", ij);
			}
			else if (ij > 10 && ij < 100)
			{
				printf(",  %d", ij);
			}
			else if (ij > 99)
			{
				printf(", %d", ij);
			}
		}
		printf("\n");
	}
	}
}
