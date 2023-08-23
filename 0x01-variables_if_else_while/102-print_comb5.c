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

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			for (k = j + 1; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar(',');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
				}
			}

			if (!(i == 7 && j == 8))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
