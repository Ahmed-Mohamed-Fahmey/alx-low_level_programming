#include "main.h"

/**
 * _islower- check if given character is lowercase
 * @c: integer that holds ascii rep of character
 *
 * Return: if character is lowrcase return 1, otherwise 0
 */
int _islower(int c)
{
	if ((char)c <= 'z' && (char)c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
