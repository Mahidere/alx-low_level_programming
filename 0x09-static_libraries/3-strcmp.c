#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if equal, less than 1 or greater than 1
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i;

	for (i = 0 ; s1[i] ; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
	}
	return (diff);
}
