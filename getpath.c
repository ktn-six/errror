#include "shell.h"

/**
 * function returns parth of variable
 *
 * return 1 - success/continue 0 - fail/exit
 */
char *get_path(void)
{
	return (_getenv("PATH"));
}
