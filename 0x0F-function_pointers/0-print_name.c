#include "function_pointers.h"

/**
 * print_name - Entry Point
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
