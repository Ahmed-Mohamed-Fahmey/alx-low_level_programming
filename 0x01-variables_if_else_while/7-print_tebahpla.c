#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	char c = 'z';

	while (c > 'a')
	{
		putchar(c);
		c--;
	}

	printf("\n");

	return (0);
}
