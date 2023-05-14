#include "main.h" 

/** 
 * _puts - outputs a string, then /n 
 * @str: pointer to the string 
 * Return: 0 
 */ 

void _puts(char *str) 
{ 
	for (; *str != '\0'; str++) 
	{ 
		_putchar(*str); 
	} 
	_putchar('\n'); 
}
