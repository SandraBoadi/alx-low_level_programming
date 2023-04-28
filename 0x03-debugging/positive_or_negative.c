#include <stdio.h>

/**
* positive_or_negative - check if the number is postive or negative
* @i : interger to check
* Return: 0
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is postive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n" , i);
	}
	return;
}



