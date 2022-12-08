#include "main.h"
/**
 *_strdup-function to duplicate strings
 *@s: pointer to string
 *Return: string duplicate it
 */
char *_strdup(char *s)
{
	size_t len;
	char *copy;

	len = strlen(s) + 1;

	copy = malloc(sizeof(len));

	if (copy)
	{
		memcpy(copy, s, len);
	}
	return (copy);
}
