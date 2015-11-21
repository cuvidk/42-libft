#include "libft.h"

void	test_memalloc(void)
{
	int	i;
	int *a;

	i = 0;
	a = (int*)ft_memalloc(sizeof(int) * 20);
	while (i < 20)
	{
		if (a[i] != 0)
			ft_putendl("ERROR: ft_memalloc failed.");
		++i;
	}
	ft_putendl("OK: ft_memalloc passed.");
	ft_putendl("---------");
}
