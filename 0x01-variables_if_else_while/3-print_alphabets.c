#include <stdio.h>
/**
 * main - lowercase + uppercase alphabets
 * a, B: string
 *
 * Description: prints lowecase and then uppercase alphabets
 * Return value: zero
 */
int main(void)
{
	char a = 'a';
	char B = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (B = 'A'; B <= 'Z'; B++)
	{
		putchar(B);
	}
	putchar('\n');

	return (0);
}
