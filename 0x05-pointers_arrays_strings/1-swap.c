#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers(a and b)
 * Description: 'Swapping'
 * @a: pointer 1
 * @b: pointer 2
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
