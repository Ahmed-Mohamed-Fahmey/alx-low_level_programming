#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: input number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
