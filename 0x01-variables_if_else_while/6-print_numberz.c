#include <stdio.h>
/**
* main - print number
*
* Return: Always 0
*/
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
