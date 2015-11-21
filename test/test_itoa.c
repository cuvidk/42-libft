#include "libft.h"

void	test_itoa(void)
{
	if (ft_strcmp("-2147483648", ft_itoa(-2147483648)) != 0)
		ft_putendl("ERROR: ft_itoa(-2147483648).");
	if (ft_strcmp("0", ft_itoa(0)) != 0)
		ft_putendl("ERROR: ft_itoa(0).");
	if (ft_strcmp("2147483647", ft_itoa(2147483647)) != 0)
		ft_putendl("ERROR: ft_itoa(2147483647).");
	ft_putendl("OK: ft_itoa passed.");
	ft_putendl("---------");
}
