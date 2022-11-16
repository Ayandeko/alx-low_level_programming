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
		while (ch <= 10)
			_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
