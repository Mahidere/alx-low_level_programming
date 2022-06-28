#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments
 *
 * @ac: number of arguments
 * @av: Pointer to arguments
 *
 * Return: argument or Null if fails
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j;
	int count1 = 0;
	int count2 = 0;

	if (ac == 0 || av == NULL)
		return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count2++;
		count2++;
	}
	result = malloc(sizeof(char) * count2 + 1);
	if (result == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[count1++] = av[i][j];
		}
		result[count1++] = '\n';
	}

	result[count2] = '\0';
	return (result);
}
