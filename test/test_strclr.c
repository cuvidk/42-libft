#include "libft.h"

void	test_strclr(void)
{
	int		i;
	char	str[20];

	while (i < 20)
		str[i++] = 'k';
	i = 0;
	str[19] = '\0';
	ft_strclr(str);
	while (i < 20)
	{
		if (str[i] != '\0')
			ft_putendl("ERROR: ft_strclr failed.");
		++i;
	}
	ft_putendl("OK: ft_strclr passed.");
	ft_putendl("---------");
}
