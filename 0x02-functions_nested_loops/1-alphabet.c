#include "main.h"
/**
  * void print_alphabet - Entry point
  * Return: void
  */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
	return (void);
}