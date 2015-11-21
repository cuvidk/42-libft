
#include "libft.h"
#include "to_upper.h"

void	test_strmapi(void)
{
	char	*s;
	char	a[20];

	ft_strcpy(a, "hello my name is");
	s = ft_strmapi(a, to_upper4);
	if (s)
		if (ft_strcmp(s, "HELLO MY NAME IS") != 0)
			ft_putendl("ERROR: ft_strmapi failed.");
	ft_putendl("OK: ft_strmapi passed.");
	ft_putendl("---------");
}
