#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 * Description: 'Print string & new line'
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
