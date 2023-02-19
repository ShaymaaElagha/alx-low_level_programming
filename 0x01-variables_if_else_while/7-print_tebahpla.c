#include <stdio.h>
/**
* main - print alphabet in lower case in reverse
*
* Return: Always 0
*/
int main(void)
{
	char small;

	small = 'z';
	while (small >= 'a')
	{
		putchar(small);
		small--;
	}
	putchar('\n');
	return (0);
}
