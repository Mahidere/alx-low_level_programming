#include "holberton.h"

/**
 * _strncat - function
 *
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0 ; src[j] != '\0' && n != j ; j++)
	{
		*(dest + i) = src[j];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
