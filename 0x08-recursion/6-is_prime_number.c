#include "main.h"

int actual_prime(int n, int iter);

/**
 * cal_prime - calculates if n is a prime
 * @n: input value
 * @i: iterator
 *
 * Return: 1 for n prime, otherwise 0
 */
int cal_prime(int n, int iter)
{
        if (iter == 1)
        {
                return (1);
        }
        if (n % iter == 0 && iter > 0)
        {
                return (0);
        }
        return (cal_prime(n, iter- 1));
}

/**
 * is_prime_number - checks if n is a prime number or not
 * @n: input value
 *
 * Return: 1 for n prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (cal_prime(n, n - 1));
}
