#include <stdio.h>
/**
* main - print alphabet in lower case
*
* Return: Always 0
*/
int main(void)
{
	char small;

	small = 'a';
	while (small <= 'z')
	{
		if (small != 'q' && small != 'e')
		{
			putchar(small);
		}
		small++;
	}
	putchar('\n');
	return (0);
}
