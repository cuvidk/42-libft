#include "libft.h"

void	test_strdup(void)
{
	if (ft_strcmp(strdup(""), ft_strdup("")) != 0)
		ft_putstr("ERROR: ft_strdup(, )\n");
	if (ft_strcmp(strdup("Abc"), ft_strdup("Abc")) != 0)
		ft_putstr("ERROR: ft_strdup(Abc, Abc)\n");
	if (ft_strcmp(strdup(".s."), ft_strdup(".s.")) != 0)
		ft_putstr("ERROR: ft_strdup(.s., .s.)\n");
	if (ft_strcmp(strdup("75qwvfwsawqq"), ft_strdup("75qwvfwsawqq")) != 0)
		ft_putstr("ERROR: ft_strdup(75qwvfwsawqq, 75qwvfwsawqq)\n");
	if (ft_strcmp(strdup("\n\t\t\n"), ft_strdup("\n\t\t\n")) != 0)
		ft_putstr("ERROR: ft_strdup(\\n\\t\\t\\n, \\n\\t\\t\\n)\n");
	if (ft_strcmp(strdup("   "), ft_strdup("   ")) != 0)
		ft_putstr("ERROR: ft_strdup('   ', '   ')\n");
	if (ft_strcmp(strdup(".;_1\ndd\t"), ft_strdup(".;_1\ndd\t")) != 0)
		ft_putstr("ERROR: ft_strdup() -> check the last test\n");
	ft_putstr("OK: ft_strdup passed.\n");
	ft_putstr("---------\n");
}
