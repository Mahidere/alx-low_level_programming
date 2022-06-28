#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function to create an array
 *
 * @size: size of the array
 * @c: value of the array
 *
 * Return: null if size if 0 or created array
 */
char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	ary = malloc(size);
	if (ary == NULL)
	{
		return ('\0');
	}
	for (i = 0 ; i < size ; i++)
	{
		ary[i] = c;
	}
	ary[size] = '\0';
	return (ary);
}
