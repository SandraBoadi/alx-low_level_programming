#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - copy to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *aaa;

	int o, n = 0;



	if (str == NULL)

		return (NULL);

	o = 0;

	while (str[o] != '\0')

		o++;



	aaa = malloc(sizeof(char) * (o + 1));



	if (aaa == NULL)

		return (NULL);



	for (n = 0; str[n]; n++)

		aaa[n] = str[n];



	return (aaa);

}

