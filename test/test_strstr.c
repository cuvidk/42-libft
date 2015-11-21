#include "libft.h"

void	test_strstr(void)
{
	if (ft_strcmp(ft_strstr("abcd", "cd"), strstr("abcd", "cd")) != 0)
		ft_putstr("ERROR: ft_strstr(abcd, cd)\n");
	if (ft_strcmp(ft_strstr("abcd", "d"), strstr("abcd", "d")) != 0)
		ft_putstr("ERROR: ft_strstr(abcd, d)\n");
	if (ft_strcmp(ft_strstr("abcd", "a"), strstr("abcd", "a")) != 0)
		ft_putstr("ERROR: ft_strstr(abcd, a)\n");
	if (ft_strcmp(ft_strstr("ab\ncd", "\n"), strstr("ab\ncd", "\n")) != 0)
		ft_putstr("ERROR: ft_strstr(ab\\ncd, \\n)\n");
	if (ft_strcmp(ft_strstr("ab\t\ncd", "cd"), strstr("ab\t\ncd", "cd")) != 0)
		ft_putstr("ERROR: ft_strstr(ab\\t\\ncd, cd)\n");
	if (ft_strstr("abcd", "xabcd") != strstr("abcd", "xabcd"))
		ft_putstr("ERROR: ft_strstr(abcd, xabcd)\n");
	if (ft_strcmp(ft_strstr("abcd", ""), strstr("abcd", "")) != 0)
		ft_putstr("ERROR: ft_strstr(abcd, )\n");
	ft_putstr("OK: ft_strstr passed.\n");
	ft_putstr("---------\n");
}
