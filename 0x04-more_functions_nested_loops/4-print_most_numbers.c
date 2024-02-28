#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 except for 2 and 4
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + 48);
		}
		++i;
	}
	_putchar('\n');
}
