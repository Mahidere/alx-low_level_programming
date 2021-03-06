#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: An array of integers
 * @n: The number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, z;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		z = a[i];
		a[i] = a[j];
		a[j] = z;
	}
}
