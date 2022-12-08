#include "main.h"
/**
 * handle_sigint - handler for sigint, caused by ctr-c
 * @sig: parameter
 */
void handle_sigint(int sig __attribute__((unused)))
{
	_putchar('\n');
	write(1, "$ ", 2);
}

/**
 * _putchar - writes the chaaracter c to stdout
 * @c: the character to print
 * Return: On success -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if strings are equal
 */

