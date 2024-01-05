#include "main.h"

/**
 * _isalpha- check if given character is alphabet
 * @c: integer that holds ascii rep of character
 *
 * Return: if character is an alphabet return 1, otherwise 0
 */
int _isalpha(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
	{
		return (1);
	}
	else if ((char)c >= 'A' && (char)c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
