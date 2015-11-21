#include "libft.h"

void	test_strcat(void)
{
	char a[10] = "hi";
	char b[10] = "";
	char c[10] = "hi";
	char d[10] = "";
	char e[10] = "\n";
	char f[10] = "\n";

	ft_strcat(a, "great");
	strcat(c, "great");
	ft_strcat(b, "okte");
	strcat(d, "okte");
	ft_strcat(e, ".\t");
	strcat(f, ".\t");

	if (ft_strcmp(a, c) != 0)
		ft_putstr("ERROR: ft_strcat(great)");
	if (ft_strcmp(b, d) != 0)
		ft_putstr("ERROR: ft_strcat(okte)");
	if (ft_strcmp(e, f) != 0)
		ft_putstr("ERROR: ft_strcat(.\\t)");
	ft_putstr("OK: ft_strcat passed.\n");
	ft_putstr("---------\n");
}
