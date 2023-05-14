#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: alphabets in lowercase and uppercase
 *
 * Return:alwats 0 (Success)
 *
 */
int main(void)
{
	char lc, up;
	for (lc = 'a'; lc <= 'z'; lc++) 

	{
		putchar(lc);
		for (up = 'A'; up <= 'Z'; up++)


			putchar(up);
	}
	putchar('\n');
	return (0);
}

