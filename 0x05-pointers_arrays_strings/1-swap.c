#include "main.h"
/**
  * swap_int - Entry point
  * Return: void
  * @a: a pointer variable
  * @b: a pointer variable
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
