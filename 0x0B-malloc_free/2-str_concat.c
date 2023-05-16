#include "main.h"		
#include <stdlib.h>		
/**
 * str_concat - get ends of input and sum up together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{

	char *conct;

	int l, kl;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	l = kl = 0;

	while (s1[l] != '\0')

		l++;

	while (s2[kl] != '\0')

		kl++;

	conct = malloc(sizeof(char) * (l + kl + 1));

	if (conct == NULL)

		return (NULL);

	l = kl = 0;

	while (s1[l] != '\0')

	{

		conct[l] = s1[l];

		l++;

	}
	while (s2[ci] != '\0')
	{

		conct[l] = s2[kl];

		l++, kl++;

	}

	conct[l] = '\0';
	return (conct);
}


























































