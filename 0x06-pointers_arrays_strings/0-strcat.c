#include "main.h"
/**
 * _strcat - Function
 *
 * @dest: first variable
 * @src: second variable
 *
 * Return: Variable
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		*(dest + i) = src[j];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
