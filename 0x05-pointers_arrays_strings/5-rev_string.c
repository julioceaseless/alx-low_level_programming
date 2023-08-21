#include "main.h"
/**
 * rev_string - reverses string
 * @s: string
 */

void rev_string(char *s)
{
	int str_len = strlen(s);
	int start = 0;
	int end = str_len - 1;

	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;

	}
}
