#include "main.h"

/**
 *  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *   * followed by a new line
 *    */
void print_alphabet_x10(void);
{
	char lm;
	int i;

	i=0;

	while (i <10)
	{
		lm = 'a';
		while (lm <= 'z')
		{
			_putchar(lm);
			lm++;
		}
		_putchar('\n');
		i++;
	}
}
