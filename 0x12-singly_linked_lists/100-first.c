#include <stdio.h>
void before_main(void)__attribute__((constuctor));

/**
 * before_main - prints message before the main function
 * Return: nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
