#include "main.h"
/**
  * _isalpha - Entry point
  * @c: a character argument
  * Return: 1 when successful and 0 when failed
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
