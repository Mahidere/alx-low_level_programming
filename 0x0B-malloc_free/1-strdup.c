#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function to copy a string
 *
 * @str: String to be coppied
 *
 * Return: Null if it is empty or copy of the string
 */
char *_strdup(char *str)
{
	char *mem;
	unsigned int i, j = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	while (*(str + j) != '\0')
	{
		j++;
	}
	j++;
	mem = malloc(sizeof(*str) * j);
	if (mem == NULL)
	{
		return ('\0');
	}
	for (i = 0 ; i < j ; i++)
	{
		mem[i] = *(str + i);
	}
	mem[i] = '\0';
	return (mem);
}
