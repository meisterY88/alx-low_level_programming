#include <stdio.h>
/**
 * main - fibonacci series
 *
 * Return: zero
 */
int main(void)
{
	unsigned long m = 1;
	unsigned long n = 2;
	int i = 0;
	unsigned long sum;

	printf("%lu, %lu", m, n);
	for (i = 0; i < 48; i++)
	{
		sum = m + n;
		printf(", %lu", sum);
		m = n;
		n = sum;
	}
	printf("\n");

	return (0);
}
