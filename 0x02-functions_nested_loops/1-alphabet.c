#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c = 97;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
