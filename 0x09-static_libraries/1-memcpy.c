#include "main.h"
/**
 * _memcpy - function to copy memory area
 *
 * @dest: destination variable
 * @src: source variable
 * @n: variable
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
