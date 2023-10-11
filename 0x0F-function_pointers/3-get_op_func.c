#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_fun - Calls functions for operation
 * @s: The required operator
 *
 * Return: A pointer to the operator function
 */
int (*get_op_func(char *s))(int, int)
{
	int iter = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};


	while (ops[iter].op != NULL && *(ops[iter].op) != *s)
	{
		iter++;
	}

	return (ops[iter].f);
}
