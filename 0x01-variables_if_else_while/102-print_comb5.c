#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(' ');

		for (k = 0; k <= 9; k++)
		{
			for (l = 0; l <= 9; l++)
			{
			putchar(k + '0');
			putchar(l + '0');

			if (i != 9 || j != 8 || k != 9 || l != 9)
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
