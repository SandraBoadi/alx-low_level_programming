#include "function_pointers.h"

/**
 * print_name - print nane by using pointer to function
 * @name: the string to add
 * @f:the pointer to function
 * Return: nil
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		return;
	f(name);
}
