#include "zs.h"

/**
* freebuff - frees buffers
* @buff: buffer to be freed
*/

void freebuff(char **buff)
{
	int i = 0;

	if (!buff)
		return;

	for (i = 0; buff[i]; i++)
	{
		free(buff[i]);
		buff[i] = NULL;
	}
	free(buff);
}
