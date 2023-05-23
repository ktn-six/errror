#include "shell.h"

/**
 * function allocates due to system error
 *
 * return 1 - success/continue 0 - fail/exit
 */
void free_error(char **argv, char *arg)
{
	int i;

	for (i = 0; argv[i]; i++)
		free(argv[i]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 *function allocated automatically free memory
 *
 * return 1 - success/continue 0 - fail/exit
 */
void free_tokens(char **ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		free((ptr[i]));
	free(ptr);
}


/**
 * function free the path cintaining global memory
 *
 * Return: Nothing
 */
void free_path(void)
{
	if (environ != NULL)
	{
		size_t i = 0;

		while (environ[i] != NULL)
		{
			if (_strncmp(environ[i], "PATH=", 5) == 0)
			{
				free(environ[i]);
				environ[i] = NULL;
				break;
			}
			i++;
		}
	}
}
