#include "shell.h"

/**
 *out of ahell.
 *return 0 exit.
 */
void shell_exit(char **args)
{
	int status = 0;

	if (args[1] != NULL)
	{
		status = _atoi(args[1]);
	}
	free_tokens(args);
	free_last_input();
	exit(status);
}
