#include <stdio.h>
/**
 * main - all letters except q and e
 * c - character
 *
 * Description: prints all the alphabet omitting q and e
 * Return: return value is zero
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c < 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
