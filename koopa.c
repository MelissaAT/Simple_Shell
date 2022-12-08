#include "main.h"
/**
 * main - 
 * Return:
 */

int main()
{
	size_t bufsize = 0;

	char *buffer = NULL, **tok = NULL;

	while(1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		if(getline(&buffer, &bufsize, stdin))
		tok =  _tokenization(buffer);
		
			if (strcmp(*tok, "exit\n") == 0)
				break;

	}
	return(0);
}
