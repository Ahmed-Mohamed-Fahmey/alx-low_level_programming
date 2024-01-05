#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 * @n: integer
 *
 * Return: |n|
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

/**
 * main - check the code
 *
 * Return: Alwayes 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);

	r = _abs(0);
	printf("%d\n", r);

	r = _abs(1);
	printf("%d\n", r);

	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
