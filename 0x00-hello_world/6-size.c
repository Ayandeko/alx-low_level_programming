#include <stdio.h>

/**
  * main - this prints sizes
  * Return: this returns 0
  */

int main(void)
{
	long a;
	long long b;

	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(a));
	printf("Size of a long long int: %lld byte(s)", sizeof(b));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
