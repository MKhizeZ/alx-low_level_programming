#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 1;

	while (l <= 100)
	{
		if (l % 3 == 0 && l % 5 != 0)
		{
			printf(" Fizz");
		} 
		else if (l % 5 == 0 && l % 3 != 0)
		{
			printf(" Buzz");
		} 
		else if (l % 3 == 0 && l % 5 == 0)
		{
			printf(" FizzBuzz");
		} 
		else if (l == 1)
		{
			printf("%d", l);
		} 
		else
		{
			printf(" %d", l);
		}
		l++;
	}
	printf("\n");

	return (0);
}

