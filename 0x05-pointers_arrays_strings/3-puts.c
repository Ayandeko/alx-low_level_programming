#include <stdio.h>
#include "main.h"

/**
  * _puts - print a string
  * @str:pointer char
  * return:void
  */
void _puts(char *str)
{
		int i = 0;

		while (*(str + 1) != '\0')
		{
			putchar(*(str + 1));
			i++
		}
		putchar('\n');
}
