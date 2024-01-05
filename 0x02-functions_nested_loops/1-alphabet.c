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

/**
 * main - check the code
 *
 * Return: Alwayes 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}
