#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - positive or negative?
 * n - integer
 *
 * Description: generates random number and says if +ve or -ve
 * Return: return value is zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
