#include <stdio.h>
/**
* main - print number base 16
*
* Return: Always 0
*/
int main(void)
{
	int num;
	char letter;

	letter = 'a';
	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
