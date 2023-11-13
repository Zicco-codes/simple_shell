#include "zs.h"

/**
* zs_strtok - creates tokens from given input
* @input: to be tokenized
* Return: tokens
*/

char **zs_strtok(char *input);
char **zs_strtok(char *input)
{
	char *buff;
	char *delimiter = " :\t\r\n";
	char **tokens = NULL;
	char *tkn;
	size_t tkn_size = 0;
	size_t j = 0;

	if (input == NULL)
	return (NULL);

	buff = zs_strdup(input);
	if (!buff)
		return (NULL);

	tkn = strtok(buff, delimiter);

	while (tkn)
	{
		tokens = (char **)realloc(tokens, (tkn_size + 1) * sizeof(char *));

		if (!tokens)
		{
			for (j = 0; j < tkn_size; j++)
			{
				free(tokens[j]);
			}
			free(tokens);
			free(buff);
			return (NULL);
		}

		tokens[tkn_size] = zs_strdup(tkn);

		if (!tokens[tkn_size])
		{
			for (j = 0; j < tkn_size; j++)
			{
				free(tokens[j]);
			}
			free(tokens);
			free(buff);
			return (NULL);
		}

		tkn_size++;
		tkn = strtok(NULL, delimiter);
	}

	free(buff);
	tokens = (char **)realloc(tokens, (tkn_size + 1) * sizeof(char *));
	if (!tokens)
	{
		return (NULL);
	}

	tokens[tkn_size] = NULL;
	return (tokens);
}
