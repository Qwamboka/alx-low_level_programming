#include "main.h"

/**
 * rev_string - Reverse a string
 * @s:The string  to be modified
 *Return:Void
 */

void rev_string(char *s)

{
	int len = 0, index = 0;
	char tmp;

	while (S[index++])
	len++;

	for (index =  - 1; index >= len / 2; index--)
	{
	tmp = S[index];
	S[index] = S[len - index - 1];
	S[len - index - 1] = tmp;
	}

}
