#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * Return: concated s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s1_s2_conc;
	int store, pos;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	store = 0;
	pos = 0;

	while (s1[store] != '\0')
	{
		store++;
	}
	while (s2[pos] != '\0')
	{
		pos++;
	}
	s1_s2_conc = malloc(sizeof(char) * (store + pos + 1));

	if (s1_s2_conc == NULL)
	{
		return (NULL);
	}
	pos = 0;
	store = 0;

	while (s1[store] != '\0')
	{
		s1_s2_conc[store] = s1[store];
		store++;
	}

	while (s2[pos] != '\0')
	{
	        s1_s2_conc[store] = s2[pos];
		pos++, store++;
	}
	s1_s2_conc[store] = '\0';
	return (s1_s2_conc);
}
