#include <stdio.h>
/**
 * main - funtion for listing numbers below 10
 * Return: Ultimate 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0 ; 1 < 1024 ; i++)
	{
		if ((i % 3 == 0) || (1 % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
