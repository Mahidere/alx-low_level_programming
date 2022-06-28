#include <stdlib.h>
/**
 * str_concat - Concates two strings together
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: concated strings or Null if it's empty
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	mem = malloc(1 + (len1 * sizeof(*s1)) + (len2 * sizeof(*s2)));
	if (mem == NULL)
		return ('\0');
	for (i = 0 ; i < len1 ; i++)
		mem[i] = *(s1 + i);
	for (j = 0 ; j < len2 ; j++, i++)
		mem[i] = *(s2 + j);
	return (mem);
}
