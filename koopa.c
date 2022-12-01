#include "main.h"
/**
 * main - 
 * Return:
 */
int main()
{
	size_t bufsize = 0;
	char *buffer = NULL;

	while(1)
	{
		write(1, "$", 2);
		getline(&buffer, &bufsize, stdin);
	}
	return(0);
}
