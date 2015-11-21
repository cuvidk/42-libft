#include "libft.h"

void	test_strnequ(void)
{
	if (ft_strnequ("ok", "ok", 2) != 1)
		ft_putendl("ERROR: ft_strnequ(ok, ok, 2) failed.");
	if (ft_strnequ(NULL, NULL, 3) != 0)
		ft_putendl("ERROR: ft_strnequ(NULL, NULL, 3) failed.");
	if (ft_strnequ(NULL, "ok", 2) != 0)
		ft_putendl("ERROR: ft_strnequ(NULL, ok, 2) failed.");
	if (ft_strnequ("Ok", "ok", 1) != 0)
		ft_putendl("ERROR: ft_strnequ(Ok, ok), 1 failed.");
	if (ft_strnequ("", "", 1) != 1)
		ft_putendl("ERROR: ft_strnequ(,,1) failed.");
	if (ft_strnequ("", "ok", 2) != 0)
		ft_putendl("ERROR: ft_strnequ(,ok, 2) failed.");
	ft_putendl("OK: ft_strnequ passed.");
	ft_putendl("---------");
}
