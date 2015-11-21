#include <stdlib.h>
#include <string.h>

void	ft_delete(void *mem, size_t size)
{
	(void)size;
	if (mem)
		free(mem);
}
