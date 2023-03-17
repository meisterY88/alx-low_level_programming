#include <stdio.h>
/**
 * main - prints numbers
 * i: integer
 *
 * Description: prints single digit numbers from 0 to 9
 * Return: return value is zero
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
