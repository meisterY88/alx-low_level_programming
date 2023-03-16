#include<stdio.h>
/**
 * main - size of data type
 * c,i, li, lli, f: char,integer,long int,long long and float
 *
 * Description: prints the size of data types in bytes
 * Return: return value is zero
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
