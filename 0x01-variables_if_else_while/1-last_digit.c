#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Find the number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d is greater than five\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d is zero\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d is less than six and not zero\n", n, ld);
	}
	return (0);
}
