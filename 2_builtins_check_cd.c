#include "shell.h"

/**
 *  changes the pwd  of the shell
 */
void shell_cd(char **args)
{
	char *dir = args[1];
	int ret;

	/* no argument  goto ~home */
	if (dir == NULL)
	{
		dir = _getenv("HOME");
		if (dir == NULL)
		{
			_puts("cd: No HOME directory found\n");
			return;
		}
	}

	ret = chdir(dir);
	if (ret == -1)
	{
		perror("cd");
	}
}
