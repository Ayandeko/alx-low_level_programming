#include <stdio.h>

/**
  * main - this prints sizes
  * Return: this returns 0
  */

int main(void)
{
	long a;
	long long b;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
