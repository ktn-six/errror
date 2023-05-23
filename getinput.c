#include "shell.h"

static char *last_input;
/**
 * function reads inputs from users
 *
 * return 1 - success/continue 0 - fail/exit
*/
char *get_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;

	do {

		prompt();


		nread = getline(&input, &input_size, stdin);
		/* looks for error */
		if (nread == -1)
		{
			free(input);
			_puts("\n");
			return (NULL);
		}

		/* removes newline */
		input[nread - 1] = '\0';

	} while (input[0] == '\0' || isspace(input[0]));

	last_input = input;
	return (input);
}

/**
 * fnction frees memory allocated
 */
void free_last_input(void)
{
	free(last_input);
	last_input = NULL;
}
