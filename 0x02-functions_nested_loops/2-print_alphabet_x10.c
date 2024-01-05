#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int repeat = 0;
	char c;

	while (repeat < 10)
	{
		c = 97;
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		repeat++;
	}
}
