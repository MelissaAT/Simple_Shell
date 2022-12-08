#include"main.h"
/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: f
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, f = 0;

	while (f == 0)
	{

	if (s1[i] < s2[i])
		f = -13;

	else if (s1[i] > s2[i])
		f = 13;

	if (s1[i] == '\0')
		break;
	i++;
	}
	return (f);
}
