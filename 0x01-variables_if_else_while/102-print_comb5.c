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
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0;

	while (d1 <= 9)
	{
		while (d2 <= 9)
		{
			d3 = d1;
			d4 = d2;
			while (d3 <= 9)
			{
				while (d4 <= 9)
				{
					if (d1 == d3 && d2 == d4)
					{
						d4++;
						continue;
					}
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');
					if (d1 == 9 && d2 == 8 && d3 == 9 && d4 == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					d4++;
				}
				d4 = 0;
				d3++;
			}
			d2++;
		}
		d2 = 0;
		d1++;
	}
	putchar('\n');
	return (0);
}
