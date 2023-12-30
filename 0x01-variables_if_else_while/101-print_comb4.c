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
	int a = 0, b = 0, c = 0;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
