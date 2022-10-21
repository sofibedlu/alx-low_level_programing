#include <stdio.h>
void beforeFun(void) __attribute__ ((constructor));
/**
 * beforeFun - excuted before main function
 */
void beforeFun(void)
{
	printf("you're beat! and yet, you must allow,\\n"
			"I bore my house upon my back!\\n");
}
