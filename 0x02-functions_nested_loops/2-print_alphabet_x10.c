#include "main.h"
/**
  * print_alphabet_x10 - void
  * Return: void
  */
void print_alphabet_x10(void)
{
	int ch;

	while (ch <= 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
	}
	ch++;
	_putchar('\n');
}
