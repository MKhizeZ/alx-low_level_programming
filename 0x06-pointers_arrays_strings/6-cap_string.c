#include "main.h"

/**
 * cap_string - Capitalizes Words in a string
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int pos = 0;

	while (str[pos])
	{
	  while (!(str[pos] >= 'a' && str[pos] <= 'z'))
		   {
			   pos++;
		   }

	  if (  str[pos - 1] == '.' ||
		str[pos - 1] == '(' ||
		str[pos - 1] == ')' ||
		str[pos - 1] == '?' ||
		str[pos - 1] == '{' ||
		str[pos - 1] == '}' ||
		str[pos - 1] == '!' ||
		str[pos - 1] == ',' ||
		str[pos - 1] == '"' ||
		str[pos - 1] == '\n' ||
		str[pos - 1] == ' ' ||
		str[pos - 1] == ';' ||
		str[pos - 1] == 0 ||
		pos == '\t')
	       {	
		str[pos] -= 32;
	       }
		pos++;
	}

	return (str);
}
