#include "main.h"
/**
 * _islower - check if it is alphabet
 *
 * @c: int variable
 *
 * Return: 1 for sucees or 0 failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
