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
	int a = 0, b = 0;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			b++;
			if (a == 8 && b == 10)
				continue;
			putchar(',');
			putchar(' ');
		}

		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
