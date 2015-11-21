
#include "libft.h"
#include "to_upper.h"

void	test_strmap(void)
{
	char	*s;
	char	a[20];

	ft_strcpy(a, "hello my name is");
	s = ft_strmap(a, to_upper3);
	if (s)
		if (ft_strcmp(s, "HELLO MY NAME IS") != 0)
			ft_putendl("ERROR: ft_strmap failed.");
	ft_putendl("OK: ft_strmap passed.");
	ft_putendl("---------");
}
