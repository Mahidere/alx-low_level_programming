#include "main.h"
/**
 * swap_int - Swap function
 *
 * @a: first variable
 * @b: Second variable
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
