#include "main.h"
/**
 * _strncmp - compares the first character of the sring
 * @s1: first string to be compare
 * @s2: second string to be compare
 * @n the maximum number of characters to be compare
 * Return: sucess
 */
int _strncmp(char *s1, char *s2, int n)
{
	if (n == 0)
		return (0);
	do {
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break;
	} while (--n != 0);
	return (0);
}
