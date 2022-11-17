#include "main.h"
/**
  * print_sign - Entry point
  * @n: a character argument
  * Return: 1 or 0 when successful and -1 when failed
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
}
