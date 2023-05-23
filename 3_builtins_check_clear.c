#include "shell.h"

/**
 * deletes workings on  the terminal.
 *1 continue 0 exit
*/
int shell_clear(char **args)
{
	(void)args;
	_puts("\033[2J\033[H");
	return (1);
}
