#include "function_pointers.h"

/**
 * print_name - Entry Point
 *	@name: var 1
 *	@f: var 2
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
