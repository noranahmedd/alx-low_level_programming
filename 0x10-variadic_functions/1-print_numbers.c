#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);
		printf("%d", num);

		if (sepereator != NULL && i < n - 1)
		{
			printf("%s", sperator);
		}
	}

	va_end(ap);
	printf("\n");
}
