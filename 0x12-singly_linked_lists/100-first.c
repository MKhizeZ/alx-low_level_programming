#include <stdio.h>

/**
 * __attribute__ - Constructor function that is automatically called before
 * the main function.
 *
 * Marked with the `__attribute__ ((constructor))` attribute,
 * which ensures that it is automatically
 * called before the `main` function is executed.
 */
void __attribute__ ((constructor)) pre_main(void);

/**
 * pre_main - Prints a message to the console before main
 *
 * This function is called by the constructor function 'pre_main'
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
