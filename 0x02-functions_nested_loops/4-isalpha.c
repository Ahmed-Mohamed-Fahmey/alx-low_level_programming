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
