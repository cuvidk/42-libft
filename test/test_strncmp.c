#include "libft.h"

void	test_strncmp(void)
{
	if (strncmp("Abc21", "Abc22", 4) != ft_strncmp("Abc21", "Abc22", 4))
		ft_putstr("ERROR: ft_strncmp(Abc21, Abc22, 4)\n");
	if (strncmp("21", "22", 2) != ft_strncmp("21", "22", 2))
		ft_putstr("ERROR: ft_strncmp(21, 22, 2)\n");
	if (strncmp(".", ".", 2) != ft_strncmp(".", ".", 2))
		ft_putstr("ERROR: ft_strncmp(., ., 2)\n");
	if (strncmp("", "", 3) != ft_strncmp("", "", 3))
		ft_putstr("ERROR: ft_strncmp(, , 3)\n");
	if (strncmp("abc", "ABC", 2) != ft_strncmp("abc", "ABC", 2))
		ft_putstr("ERROR: ft_strncmp(abc, ABC, 2)\n");
	if (strncmp("abC", "abC2", 3) != ft_strncmp("abC", "abC2", 3))
		ft_putstr("ERROR: ft_strncmp(abc, abC2, 3)\n");
	if (strncmp("CVf", "Cvf", 1) != ft_strncmp("CVf", "Cvf", 1))
		ft_putstr("ERROR: ft_strncmp(CVf, Cvf, 1)\n");
	ft_putstr("OK: ft_strncmp passed.\n");
	ft_putstr("---------\n");
}
