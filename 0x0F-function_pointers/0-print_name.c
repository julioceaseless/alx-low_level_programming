#include "function_pointers.h"
/**
 * print_name - accepts function pointer
 * @name: pointer to string name
 * @f: pointer to callback function
 */
void print_name(char *name, void (*f)(char *))
{
	/* call back */
	f(name);
}
