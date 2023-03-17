#include <stdio.h>
/**
 * main - numbers in base 16
 * c, n - char and int
 *
 * Description: prints 0123456789abcdef
 * Return: return value is zero
 */
int main(void)
{
	char c = 'a';
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	
	return (0);
}
