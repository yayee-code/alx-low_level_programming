#include "main.h"

/*
 * _isdigit - check for a digits
 * @c: the character to be check
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
