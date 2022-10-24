#include "main.h"
#include <stdio.h>

/**
 * _strlen - checks the length of a string
 * @s: string to check
 * Description: 'Checking the length of string s'
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
