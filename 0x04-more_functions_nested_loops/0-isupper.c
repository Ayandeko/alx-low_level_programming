#include "main.h"
/**
  * _isupper - Entry point
  * Return: 1 for success, and 0 when failed
  * @c: a character argument
  */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))

		return (1);
	return (0);
}
