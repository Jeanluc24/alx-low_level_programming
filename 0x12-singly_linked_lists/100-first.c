#include <stdio.h>

void preMainPrint(void) __attribute__ ((constructor));

/**
 * first - Printing a given sentence before the main
 * function is  being executed
 */
	void preMainPrint(void)
	{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	}
