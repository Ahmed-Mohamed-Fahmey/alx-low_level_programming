#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row = 0, col, res;

	while (row <= 9)
	{
		col = 0;
		res = row * col;
		_putchar(res + '0');
		_putchar(',');
		col++;
		while (col <= 9)
		{
			res = row * col;
			_putchar(' ');

			if (res / 10 == 0)
			{
				_putchar(' ');
				_putchar(res % 10 + '0');
				if (col != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
				if (col != 9)
				{
					_putchar(',');
				}
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
