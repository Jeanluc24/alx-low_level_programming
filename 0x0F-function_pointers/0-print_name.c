#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name by using pointer to function
 * @name: string that is to add
 * @printer_func: pointer to a function
 * Return: nothing
 **/
void print_name(char *name, void (*printer_func)(char *))
{
	if (name == NULL || f == NULL)
		return;

	printer_func(name);
}
