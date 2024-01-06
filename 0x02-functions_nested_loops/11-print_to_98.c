#include "main.h"

/**
 * print_to_98 - prints from any integer number to 98
 * @n: int number to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d", n);
	}
	printf("\n");
}
