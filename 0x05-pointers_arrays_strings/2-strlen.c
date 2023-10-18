#include "main.h"

/**
 * _strlen - nfind the length of a string
 * @s: strings to be counted
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[1] != '\0'; i++)
		count++;
	return (count);
}
