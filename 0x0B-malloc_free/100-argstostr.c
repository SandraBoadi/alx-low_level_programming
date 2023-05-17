#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int s, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (n = 0; av[s][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		for (n = 0; av[s][n]; n++)
		{
			str[r] = av[s][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

