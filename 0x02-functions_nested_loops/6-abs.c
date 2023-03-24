#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @a: check parameters
 * Return: Ultimate a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
	a = a;
	return (a);
}
