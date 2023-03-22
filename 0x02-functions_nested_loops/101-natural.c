#include <stdio.h>
/**
 * main - prints sum of multiples of 3 and 5 below 1024
 *
 * Return: zero
 */
int main(void)
{
	int i, sum = 0;
	int m3, m5;

	for (i = 0; i < 1024; i++)
	{
		m3 = i % 3;
		m5 = i % 5;

		if (m3 == 0 || m5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
