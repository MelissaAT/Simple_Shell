#include "main.h"
/** read_command - Read a command from standard input
 */
char **_tokenization(char *s1, char *del)
{
	char **token;/*char string ls -l*/
    char *command = NULL;
    int i = 0;

	/*
	 * maloc * number of spaces + 1
	 * */
	token = malloc(sizeof(char *) * 4);
	if (token == NULL)
	{
		return (NULL);
	}

	command = strtok(s1, del); /*first token of the string*/
	while (command != NULL)
	{
		token[i] = malloc(sizeof(char) * ((strlen(command)) + 1));
		strcpy(token[i], command);
		command = NULL;
		command = strtok(NULL, del);
		i++;
	}
	token[i] = NULL;
	return (token);
}
