#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit of a number
 * n, ld - number, last digit (integers)
 *
 * Description: gets last digit of a number through modulo
 * Return: return value is zero
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	printf("Last digit of %d is %d ", n, ld);

	if (ld > 5)
	printf("and is greater than 5\n");
	else if (ld == 0)
		printf("and is 0\n");
	else if (ld < 6 && ld != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
