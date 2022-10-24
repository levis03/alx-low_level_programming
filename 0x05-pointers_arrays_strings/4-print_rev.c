#include "main.h"

/**
 * print_rev - prionts a string in reverse
 * @s: the used string reference pointer
 * Description: 'Just a reference pointer'
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
