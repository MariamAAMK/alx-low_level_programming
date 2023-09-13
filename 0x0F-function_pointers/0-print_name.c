#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -a function that prints a name
 * @name: name
 * @f: function pointer
 */

typedef void (*PrintFunction)(char *);

void print_name(char *name, PrintFunction f)
{
	f(name);
}
