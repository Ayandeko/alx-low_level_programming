#include "main.h"
/**
  * print_last_digit - Entry point
  * @r: a character argument
  * @n: a character argument
  * Return: last digit
  */
int print_last_digit(int n)
{
	int r;

	if (r < 0)
		r = r * -1;
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
