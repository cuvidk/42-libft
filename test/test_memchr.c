#include "libft.h"

void	test_memchr(void)
{
	char *a = "hereismy\tstr\ning";
	if (ft_strcmp((char*)memchr(a, 'y', 8), (char*)ft_memchr(a, 'y', 8)) != 0)
		ft_putstr("ERROR: ft_memchr(a, y, 8)\n");
	if (ft_strcmp((char*)memchr(a, 'h', 8), (char*)ft_memchr(a, 'h', 8)) != 0)
		ft_putstr("ERROR: ft_memchr(a, h, 8)\n");
	if (ft_strcmp((char*)memchr(a, 'g', 20), (char*)ft_memchr(a, 'g', 20)) != 0)
		ft_putstr("ERROR: ft_memchr(a, g, 8)\n");
	if (ft_strcmp((char*)memchr(a, '\0', 20), (char*)ft_memchr(a, '\0', 20)) != 0)
		ft_putstr("ERROR: ft_memchr(a, \\0, 8)\n");
	if (ft_strcmp((char*)memchr(a, '\n', 20), (char*)ft_memchr(a, '\n', 20)) != 0)
		ft_putstr("ERROR: ft_memchr(a, \\n, 20)\n");
	if (memchr(a, 'x', 60) != ft_memchr(a, 'x', 60))
		ft_putstr("ERROR: ft_memchr(a, x, 60)\n");
	ft_putstr("OK: ft_memchr passed.\n");
	ft_putstr("---------\n");
}
