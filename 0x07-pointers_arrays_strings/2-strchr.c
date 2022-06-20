#include "main.h"
/**
 * _strchr - function to find a character
 *
 * @s: String variable
 * @c: character variable
 *
 * Return: return s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
