#include "shell.h"

/**
 * function that promts to a  starnard input
 *
 * return 1 - success/continue 0 - fail/exit
 */
void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
