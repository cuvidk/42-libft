#include "libft.h"

void	test_strnew(void)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = ft_strnew(20);
	while (i < 20)
	{
		if (newstr[i] != '\0')
			ft_putendl("ERROR: ft_strnew failed.");
		++i;
	}
	ft_putendl("OK: ft_strnew passed.");
	ft_putendl("---------");
}
