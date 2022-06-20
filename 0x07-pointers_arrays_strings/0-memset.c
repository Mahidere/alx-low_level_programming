#include "main.h"
/**
 * _memset - function to fill the memory
 *
 * @s: variable one
 * @b: variable two
 * @n: variable three
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
