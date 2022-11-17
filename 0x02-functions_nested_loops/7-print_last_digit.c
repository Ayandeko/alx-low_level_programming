#include "main.h"
/**
  * print_last_digit - Entry point
  * @r: a character argument
  * Return: last digit
  */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
