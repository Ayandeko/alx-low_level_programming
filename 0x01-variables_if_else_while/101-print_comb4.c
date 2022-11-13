#include <stdio.h>
/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	int m;
	int n;
	int q;

	m = 0;
	for (m = '0' ; m <= '9' ; m++)
	{
		n = 0;
		for (n = '0' ; n <= '9' ; n++)
		{
			q = 0;
			for (q = '0' ; q <= '9' ; q++)
			{
				if (!((m == n) || (n == q) ||
							(n > q) || (m > n)))
				{
					putchar(m);
					putchar(n);
					putchar(q);
					if (!(q == '9' && m == '7' &&
								n == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
