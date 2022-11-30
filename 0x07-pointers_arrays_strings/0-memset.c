#include "main.h"
/**
  * _memset - Entry point
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
