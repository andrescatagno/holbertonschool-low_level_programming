#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string
 * @f: pointer to the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}