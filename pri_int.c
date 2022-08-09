#include "main.h"

/**
 * print_int - prints integer
 * @int: integer
 * Return: void
 */

void print_int(int x)
{
	int t;
	char *str;

	str = atoi(t, 10);
	for (t = 0; str[t] != '\0'; t++)
	{
		write(1, &str[t], 1);
	}
}
