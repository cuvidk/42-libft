#include "libft.h"

void	test_strlen(void)
{
	if (ft_strlen("") != strlen(""))
		ft_putstr("ERROR: ft_strlen()\n");
	if (ft_strlen("abcd") != strlen("abcd"))
		ft_putstr("ERROR: ft_strlen(abcd)\n");
	if (ft_strlen("\n\ta\t\n") != strlen("\n\ta\t\n"))
		ft_putstr("ERROR: ft_strlen(\\n\\ta\\t\\n)\n");
	if (ft_strlen("\0") != strlen("\0"))
		ft_putstr("ERROR: ft_strlen(\\0)\n");
	if (ft_strlen("2121\0abc") != strlen("2121\0abc"))
		ft_putstr("ERROR: ft_strlen(2121\\0abc)\n");
	ft_putstr("OK: ft_strlen passed.\n");
	ft_putstr("---------\n");
}
