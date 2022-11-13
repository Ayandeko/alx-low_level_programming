#include <stdio.h>
/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	int m = 0, n;

	n = 0;
	for (n = '0' ; n <= '9' ; n++)
	{
		for (m = '0' ; m <= '9' ; m++)
		{
			if (!((m == n) || (n > m)))
			{
				putchar(n);
				putchar(m);
				if (!(m == '9' && n == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
