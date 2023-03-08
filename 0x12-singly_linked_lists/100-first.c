#include <stdio.h>

/**
 * beforeFun - excuted before main function
 */
void __attribute__((constructor)) beforeFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
