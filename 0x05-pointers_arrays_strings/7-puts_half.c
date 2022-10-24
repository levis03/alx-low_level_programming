#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Description: 'Just strings'
 * Return: 0
 */

void puts_half(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
		;
	m++;
	for (m /= 2; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
