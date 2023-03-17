#include <stdio.h>
/**
 * main - print single digit numbers
 * i, :  int
 *
 * Description: prints single digit numbers seperated by commas and spaces
 * Return: return value is zero
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(48 +n);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
