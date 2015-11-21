#include "libft.h"

void	test_iswhitespace(void)
{
	if (!ft_iswhitespace('\t'))
		ft_putstr("ERROR: ft_iswhitespace(\\t)\n");
	if (!ft_iswhitespace('\n'))
		ft_putstr("ERROR: ft_iswhitespace(\\n)\n");
	if (!ft_iswhitespace(' '))
		ft_putstr("ERROR: ft_iswhitespace( )\n");
	if (ft_iswhitespace('s'))
		ft_putstr("ERROR: ft_iswhitespace(s)\n");
	if (ft_iswhitespace('9'))
		ft_putstr("ERROR: ft_iswhitespace(9)\n");
	ft_putstr("OK: ft_iswhitespace passed.\n");
	ft_putstr("---------\n");
}
