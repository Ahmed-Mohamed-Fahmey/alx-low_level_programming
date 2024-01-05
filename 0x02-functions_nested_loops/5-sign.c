#include "main.h"

/**
 * print_sign- prints the sign of the number
 * @n: integer input to the function
 *
 * Return: 1 if number is positive
 * 0 if number is zero
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
