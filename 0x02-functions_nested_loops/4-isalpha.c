#include "main.h"

/**
 * _isalpha - check whether the character is alphabet
 * @c: character to be tested
 *
 * Return: 1 if c is a letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
