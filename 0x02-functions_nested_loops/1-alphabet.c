#include <stdio.h>
#include "main.h"

/**
 * main- Entry point
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
