#include "main.h"
/**
  * print_numbers - function that print all numbers from
  * @n: a character argument
  * Return: returns nothing
  */
void print_numbers(void)
{
	int n = 0;

	while (n <= '9')
	{
		_putchar(n);
	}
	n++;
	_putchar('\n');
}
