#include "libft.h"

void	test_strequ(void)
{
	if (ft_strequ("ok", "ok") != 1)
		ft_putendl("ERROR: ft_strequ(ok, ok) failed.");
	if (ft_strequ(NULL, NULL) != 0)
		ft_putendl("ERROR: ft_strequ(NULL, NULL) failed.");
	if (ft_strequ(NULL, "ok") != 0)
		ft_putendl("ERROR: ft_strequ(NULL, ok) failed.");
	if (ft_strequ("Ok", "ok") != 0)
		ft_putendl("ERROR: ft_strequ(Ok, ok) failed.");
	if (ft_strequ("", "") != 1)
		ft_putendl("ERROR: ft_strequ(,) failed.");
	if (ft_strequ("", "ok") != 0)
		ft_putendl("ERROR: ft_strequ(,ok) failed.");
	ft_putendl("OK: ft_strequ passed.");
	ft_putendl("---------");
}
