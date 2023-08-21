#include "main.h"
/**
 * rev_string - reverses string
 * @s: string
 */

void rev_string(char *s)
{
	int n;

	for (n = strlen(s); n >= 0; n--)
	{
		printf("%c", s[n]);

	}
}
