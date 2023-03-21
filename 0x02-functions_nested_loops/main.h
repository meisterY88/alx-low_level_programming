putchar(95);
putchar(112);
putchar(117);
putchar(116);
putchar(99);
putchar(104);
putchar(97);
putchar(114);
putchar(10);

void print_alphabet(void)
{
	int i = 0;
	for(i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}

	putchar('\n');
}
