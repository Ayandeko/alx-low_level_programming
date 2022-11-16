#include "main.h"
/**
  * print_alphabet_x10 - void
  * Return: void
  */
void print_alphabet_x10(void)
{
	int ch;
	int n;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		for (n = 0 ; n < 10 ; n++)
			_putchar(ch);
	}
	_putchar('\n');
}
