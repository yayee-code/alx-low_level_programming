#include <stdio.h>


/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: (success)
 */

int main(void)
{

	unsigned long int i = 1000000000;
	unsigned long bef = 1;
	unsigned long aft = 2;
	unsigned long bef1;
	unsigned long bef2;
	unsigned long aft1;
	unsigned long aft2;

	printf("%lu", bef);

	 for (i = 1 ; i < 91 ; i++)
	{
		printf("%lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	aft2 = (aft % 1);

	for (i = 92; i < 99; ++i)
	{

		printf(", %lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 / 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef1;
		bef2 = aft2 - bef1;
	}
	printf("\n");
	return (0);
}
