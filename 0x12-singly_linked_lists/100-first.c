#include <stdio.h>
void beforeFun(void) __attribute__ ((constructor));
/**
 * beforeFun - excuted before main function
 */
void beforeFun(void)
{
	printf("you're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature,"
			" challenges one to a race.)\n");
	return (0);
}
