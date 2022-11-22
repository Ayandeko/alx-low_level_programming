#include "main.h"
/**
  * print_line - Entry point
  * Return: void
  * @n: a character argument
  */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
