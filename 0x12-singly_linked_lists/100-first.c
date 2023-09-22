#include <stdio.h>

void __attribute__ ((constuctor)) before_main(void);

/**
 * before_main - prints message before the main function
 * Return: nothing
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
