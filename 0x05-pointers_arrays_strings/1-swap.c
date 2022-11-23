#include "main.h"
/**
  * swap_int - Entry point
  * Return: void
  * @x: a variable
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
