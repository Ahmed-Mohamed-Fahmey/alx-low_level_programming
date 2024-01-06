#include "main.h"

/**
 * print_times_table - prints the times table for n
 * @n: input number to print times table for
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	int row = 0, mult, prod;

	while (row <= n)
	{
		_putchar('0'); /*print 0 in the beginning of each line*/
		mult = 1;
		while (mult <= n)
		{
			_putchar(',');
			_putchar(' ');
			prod = row * mult;
			if (prod / 100 != 0) /*in case product has a hundreds section*/
			{
				_putchar(prod / 100 + '0'); /*print the hundreds section*/
				prod %= 100;				/*remove the hundreds section*/
				_putchar(prod / 10 + '0');	/*print the tens section*/
				_putchar(prod % 10 + '0');	/*print the ones section*/
			}
			else /*product has no hundreds section then there are 2 cases*/
			{
				if (prod / 10 != 0) /*(1) it has tens*/
				{
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else /*(2) it has no tens*/
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
			}
			mult++;
		}
		_putchar('\n');
		row++;
	}
}
