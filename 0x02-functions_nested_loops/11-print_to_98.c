#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n: fuction parameter
 *
 * Return: ultimate 0
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)

		{
			printf("'%d, -" i);
		}
		print('\n');
	{
	else if (n < 0)
	{
		for  (i = n ; i <= 98 ; i++)

	{
		printf("%d, -" i);
	}
	{
	printf("\n")
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, -", i);
		}
		printf('\n');
	}
	else if (n == 98)
		printf("%d, -" n);
}

