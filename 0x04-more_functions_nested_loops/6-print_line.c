#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: print int
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
