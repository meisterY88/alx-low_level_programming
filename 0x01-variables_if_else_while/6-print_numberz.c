#include <stdio.h>
/**
 * main - prints numbers
 * putchar - prints out the string inside braces
 *
 * Description: prints single digit numbers from 0 to 9 with putchar
 * Return: return value is zero
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
