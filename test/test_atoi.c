#include "libft.h"

void	test_atoi(void)
{
	if (ft_atoi("12334") != atoi("12334"))
		ft_putstr("ERROR: ft_atoi(12334)\n");
	if (ft_atoi("-12334") != atoi("-12334"))
		ft_putstr("ERROR: ft_atoi(-12334)\n");
	if (ft_atoi("-2147483648") != atoi("-2147483648"))
		ft_putstr("ERROR: ft_atoi(-2147483648)\n");
	if (ft_atoi("0") != atoi("0"))
		ft_putstr("ERROR: ft_atoi(0)\n");
	if (ft_atoi("\t\n-12dfs23") != atoi("\t\n-12dfs23"))
		ft_putstr("ERROR: ft_atoi(\\t\\n-12dfs23)\n");
	if (ft_atoi("\t12\t1") != atoi("\t12\t1"))
		ft_putstr("ERROR: ft_atoi(\\t12\\t1)\n");
	if (ft_atoi("\t\n\t\t\n") != atoi("\t\n\t\t\n"))
		ft_putstr("ERROR: ft_atoi(\\t\\n\\t\\t\\n)\n");
	if (ft_atoi("02121") != atoi("02121"))
		ft_putstr("ERROR: ft_atoi(02121)\n");
	if (ft_atoi("23\021") != atoi("23\021"))
		ft_putstr("ERROR: ft_atoi(23\\021)\n");
	ft_putstr("OK: ft_atoi passed.\n");
	ft_putstr("---------\n");
}
