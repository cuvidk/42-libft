#include "libft.h"

void	test_memmove(void)
{
	char	a[10];
	char	b[10];
	int	x;
	int	y;

	y = 5;
	memmove(a, "abcde", 4);
	ft_memmove(b, "abcde", 4);
	if (ft_strncmp(a, b, 4) != 0)
		ft_putstr("ERROR: ft_memmove(abcde, 4)\n");
	memmove(a, "\n\t\t21", 5);
	ft_memmove(b, "\n\t\t21", 5);
	if (ft_strncmp(a, b, 5) != 0)
		ft_putstr("ERROR: ft_memmove(\\n\\t\\t21, 5)\n");

	
	ft_memmove(&x, &y, sizeof(y));
	if (x != y)
		ft_putstr("ERROR: ft_memmove(x, y, sizeof(y))\n");
	ft_putstr("OK: ft_memmove passed.\n");
	ft_putstr("---------\n");
}
