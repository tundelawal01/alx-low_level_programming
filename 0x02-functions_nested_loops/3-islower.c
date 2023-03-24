#include "main.h"

/**
 * _islower - This is a fuction to print lower case
 *
 * @c: parameters to be printed
 *
 * Return: 1 if it is a lower caser
 * and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
