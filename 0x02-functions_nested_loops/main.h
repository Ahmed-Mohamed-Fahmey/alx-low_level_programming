#include <stdio.h>

int _putchar(char c);

/**
 * print_alphabet- function to print alphabet in lowercase
 *
 * Return: void
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
