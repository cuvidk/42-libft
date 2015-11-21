#include "libft.h"

void	test_strcmp(void)
{
	if (strcmp("Abc21", "Abc21") != ft_strcmp("Abc21", "Abc21"))
		ft_putstr("ERROR: ft_strcmp(Abc21, Abc21)\n");
	if (strcmp("21", "21") != ft_strcmp("21", "21"))
		ft_putstr("ERROR: ft_strcmp(21, 21)\n");
	if (strcmp(".", ".") != ft_strcmp(".", "."))
		ft_putstr("ERROR: ft_strcmp(., .)\n");
	if (strcmp("", "") != ft_strcmp("", ""))
		ft_putstr("ERROR: ft_strcmp(, )\n");
	if (strcmp("abc", "ABC") != ft_strcmp("abc", "ABC"))
		ft_putstr("ERROR: ft_strcmp(abc, ABC)\n");
	if (strcmp("abC", "abC2") != ft_strcmp("abC", "abC2"))
		ft_putstr("ERROR: ft_strcmp(abc, abC2)\n");
	if (strcmp("CVf", "Cvf") != ft_strcmp("CVf", "Cvf"))
		ft_putstr("ERROR: ft_strcmp(CVf, Cvf)\n");
	ft_putendl("OK: ft_strcmp passed.");
	ft_putendl("---------");
}
