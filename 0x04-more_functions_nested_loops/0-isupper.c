#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: the functions parameters
 * Return: 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
