#include "zs.h"

/**
* zs_prompt - displays prompt
*/

void zs_prompt(void)
{
	if ((isatty(1) == 1) && (isatty(1) == 1))
		flags.interactive = 1;

	if (flags.interactive)
		write(1, "$ ", 2);
}
