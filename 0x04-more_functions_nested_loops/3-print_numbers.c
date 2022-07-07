#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}

	putchar ('\n');
}
