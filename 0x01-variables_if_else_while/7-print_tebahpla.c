#include <stdio.h>
/**
 * main - reverse alphabet
 * c - chaarcater
 *
 * Description: prints letters a-z in reverse order
 * Return: return value is zero
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
