#include "main.h"
#define NULL_S(S) ((S) == NULL ? ("(nil)") : (S))

/**
 * print_args - prints function arguments
 * @args: given arguments
 * @format: a character string.
 * Return: void
 */

void print_args(const char format, va_list args)
{
	int x;
	char *p, *q;
	const char sp[] = "cs%";

	x = 0;
	while (x < 4)
	{
		if (format == sp[x])
		{
			switch (format)
			{
				case 'c':
					print_char(va_arg(args, int));
					break;
				case 'i':
					print_int(va_arg(args, int));
					break;
				case 'd':
					print_int(va_arg(args, int));
					break;
				case 's':
					p = va_arg(args, char *);
					q = NULL_S(p);
					print_string(q);
					break;
				case '%':
					print_char('%');
					break;
				default:
					break;
			}
		}
		x++;
	}
}

/**
 * _printf -  produces output according to a format.
 * @format: is a character string.
 * Return: success or failure, for now.
 */
int _printf(const char *format, ...)
{
	int x;
	char *temp;
	va_list args;

	va_start(args, format);
	temp = (char *)format;
	if ((_strcmp(temp, "") == 0) || format == NULL)
	{
		print_string("(nil)");
		exit(EXIT_FAILURE);
	}
	while (x < _strlen(temp))
	{
		if (format[x] == '%')
		{
			print_args(format[x + 1], args);
			x = x + 2;
		}
		else
		{
			print_char(format[x]);
			x++;
		}
	}
	va_end(args);
	exit(EXIT_SUCCESS);
}
