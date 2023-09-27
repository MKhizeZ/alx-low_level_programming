#include "main.h"

int _stringlen_recursion(char *s);
int check_pal(char *s, int iter, int length);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 for True, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (search_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: calculte string length 
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @length: string length
 *
 * Return: 1 if palindrome,otherwise 0 if not
 */
int search_pal(char *s, int iter, int length)
{
	if (*(s + iter) != *(s + length - 1))
	{
		return (0);
	}
	if (iter >= length)
	{
		return (1);
	}
	return (search_pal(s, iter + 1, length - 1));
}
