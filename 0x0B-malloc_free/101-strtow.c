#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to check
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int omg, c, w;

	omg = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			omg = 0;
		else if (omg == 0)
		{
			omg = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - seperate a string into words
 * @str: string to seperate
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int s, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (s = 0; s <= len; s++)
	{
		if (str[s] == ' ' || str[s] == '\0')
		{
			if (c)
			{
				end = s;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = s;
	}

	matrix[k] = NULL;

	return (matrix);
}

