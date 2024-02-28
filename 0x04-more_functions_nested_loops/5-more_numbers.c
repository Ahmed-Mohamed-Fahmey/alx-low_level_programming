#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(((j / 10) % 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}

}
