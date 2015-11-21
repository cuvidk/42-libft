#include "libft.h"

void	test_memdel(void)
{
	char *a;
	
	a = (char*) malloc(20);
	ft_memdel((void**)&a);
	if (a != NULL)
		ft_putendl("ERROR: ft_memdel()");
	ft_putendl("OK: ft_memdel passed.");
	ft_putendl("---------");
}
