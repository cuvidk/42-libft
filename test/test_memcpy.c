#include "libft.h"

void	test_memcpy(void)
{
	char	a[10];
	char	b[10];
	int	x;
	int	y;

	y = 5;
	memcpy(a, "abcde", 4);
	ft_memcpy(b, "abcde", 4);
	if (ft_strncmp(a, b, 4) != 0)
		ft_putstr("ERROR: ft_memcpy(abcde, 4)\n");
	memcpy(a, "\n\t\t21", 5);
	ft_memcpy(b, "\n\t\t21", 5);
	if (ft_strncmp(a, b, 5) != 0)
		ft_putstr("ERROR: ft_memcpy(\\n\\t\\t21, 5)\n");

	
	ft_memcpy(&x, &y, sizeof(y));
	if (x != y)
		ft_putstr("ERROR: ft_memcpy(x, y, sizeof(y))\n");
	ft_putstr("OK: ft_memcpy passed.\n");
	ft_putstr("---------\n");
}
