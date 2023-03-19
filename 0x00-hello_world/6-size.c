#include <stdio.h>
/**
 * main - A program that prints the size of a various types of computer
 * Return: 0 (Successful)
 */
int main(void)
{
	char q;
	int w;
	long int e;
	long long int r;
	float t;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
