#include "main.h"
/**
  * print_alphabet_x10 - void
  * Return: void
  */
void print_alphabet_x10(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		for (ch = 1 ; ch <= 10 ; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
