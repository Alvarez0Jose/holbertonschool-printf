#include "main.h"
/**
 * _putchar - print char
 * @c: variable to print
 * Return: output
 */
/*protoype*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
