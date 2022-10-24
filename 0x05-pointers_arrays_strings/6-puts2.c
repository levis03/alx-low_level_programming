#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints characters of a string
 * @str: the string reference to use
 * Description: 'We want to print the characters of a string'
 * Return: 0
 */

void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
