#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: length of the line
 * Return: void
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;
		int i;
		/* responsible for lines */
		for (l = 0; l < n; l++)
		{
			for (i = 0; i < l; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
