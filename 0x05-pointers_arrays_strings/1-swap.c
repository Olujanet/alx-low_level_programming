#include <stdio.h>

/**
 * Swap_int - Swaps the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int m;

	m  = *a;
	*a = *b;
	*b = m;
}
