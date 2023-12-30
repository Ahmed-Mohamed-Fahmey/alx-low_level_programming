#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Alwayes 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + 48);
		a++;
	}

    putchar(10);

	return (0);
}
