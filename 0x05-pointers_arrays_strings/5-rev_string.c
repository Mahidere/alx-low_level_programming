#include "main.h"
/**
 * rev_string - Revereses a string
 *
 * @s: variable
 */
void rev_string(char *s)
{
	int i, j, end;

	i = 0;
	end = 0;
	while (s[i])
	{
		i++;
	}
	j = i / 2;
	while (end != j)
	{
		char temp = s[end];
		int start = i - end - 1;

		s[end] = s[start];
		s[start] = temp;
		end++;
	}
}
