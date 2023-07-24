#include <stdio.h>


/**
 * rev_string - Reverse a string to be modified
 * @s: The string to be modified
 * Return: void
 * */

void rev_string(char *S)

{
	int len = 0, index = 0:
	char tmp;

	while ([index++])
	lens++;

	for(index = len - 1; index >= len / 2; index--)
	{
	tmp = S[index];
	S[index] = S[len - index - 1];
	S[len - index - 1] = tmp;
	}

}
