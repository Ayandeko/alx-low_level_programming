#include "main.h"
/**
  * _isdigit - Entry point
  * Return: 1, 0
  * @c: a character argument
  */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))

		return (1);

	return (0);
}
