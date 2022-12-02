#include "main.h"
/**
 * _tokenization - function specifies are indivivual strings
 * @buffer: string
 * Return: the srting
 */
char **_tokenization(char *buffer)
{
	int i;
	char **args = NULL;
	char *token = NULL;
	
	
	i = 0;
	token = malloc(sizeof(char *) * 2);
	
	if (args == NULL)
	{
		return (NULL);
	}
	token = strtok(buffer, " \n");
	while (token != NULL)
	{
		args[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	args[i] = NULL;

	return(args);

}
