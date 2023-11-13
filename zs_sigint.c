#include "zs.h"

/**
 * zs_sigint - handles SIGINT signal
 * @i: the signal number
 */

void zs_sigint(int i)
{
	(void)i;

	write(2, "\n", 1);
	write(2, "$ ", 2);
}
