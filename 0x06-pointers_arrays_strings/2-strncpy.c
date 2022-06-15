#include "main.h"

/**
 * _strncpy - Copies a string up to @n bytes
 *
 * @dest: first variabl
 * @src: seconf variable
 * @n: third variable
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		*(dest + i) = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
