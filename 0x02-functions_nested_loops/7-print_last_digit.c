#include "main.h"
/**
  * print_last_digit - Entry point
  * @r: a character argument
  * Return: last digit
  */
int print_last_digit(int r)
{
	int n;

	if (n < 0)
		n = -n;
	r = n  % 10;
	_putchar('0' + r);
	return (r);
}
