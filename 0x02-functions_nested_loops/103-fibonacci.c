#include <stdio.h>
/**
 * main - sum of even numbers in fibonacci series
 *
 * Return: zero
 */
int main(void)
{
	unsigned long m = 1;
	unsigned long n = 2;
	unsigned long int sum, sum2, e;

	e = 0;

	while (n <= 4000000)
	{
		sum = m + n;
		if (n % 2 == 0 )
		{
			sum2 = e + n;
			e = sum2;
			
		}
		m = n;
		n = sum;
	}
	printf("%lu\n", e);
	

	return (0);
}
