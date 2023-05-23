#include "shell.h"

/**
 * function for signal copy (Ctrl+C)
 *
 *return 1 - success/continue 0 - fail/exit
 */
void handle_sigint(int sig)
{
	(void) sig;
	_putchar('\n');
	prompt();
}

/**
 * function to handle QUIT Ctrl+\
 *
 *
 * return 1 - success/continue 0 - fail/exit
 */
void handle_sigquit(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 * funxtion to handle stop_Ctrl+Z
 *
 *
 * return 1 - success/continue 0 - fail/exit
 */
void handle_sigstp(int sig)
{
	(void) sig;
	_puts("\n");
	prompt();
}
