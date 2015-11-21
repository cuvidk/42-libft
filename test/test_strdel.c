#include "libft.h"

void	test_strdel(void)
{
	char *str;

	str = (char*)malloc(20);
	ft_strdel(&str);
	if (str != NULL)
		ft_putendl("ERROR: ft_strdel error.");
	ft_putendl("OK: ft_strdel passed.");
	ft_putendl("---------");
}
