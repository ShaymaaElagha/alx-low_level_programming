#include <stdio.h>
/**
* main - print alphabet in lower case
*
* Return: Always 0
*/
int main(void)
{
	char small;
	char cap;

	small = 'a';
	cap = 'A';
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
