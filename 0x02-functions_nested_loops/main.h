#include <unistd.h>
#include <stdio.h>
int _putchar(char c);
void print_alphabet(void)
{
	char c = 'a';
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
