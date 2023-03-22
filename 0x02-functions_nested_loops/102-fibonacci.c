#include <stdio.h>
/**
 * main - fibonacci series
 *
 * Return: zero
 */
int main(void)
{
	int m = 1;
	int n = 2;
	int i = 0;
	long int sum;

	printf("%d, %d", m, n);
	for (i = 0; i < 48; i++)
	{
		sum = m + n;
		printf(", %ld", sum);
		m = n;
		n = sum;
	}
	printf("\n");

	return (0);
}
