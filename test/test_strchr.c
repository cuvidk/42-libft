#include "libft.h"

void	test_strchr(void)
{
	if (ft_strcmp(strchr("hello", 'e'), ft_strchr("hello", 'e')) != 0)
		ft_putstr("ERROR: ft_strchr(hello, e)\n");
	if (ft_strcmp(strchr("hello", 'o'), ft_strchr("hello", 'o')) != 0)
		ft_putstr("ERROR: ft_strchr(hello, o)\n");
	if (ft_strcmp(strchr("hello", 'h'), ft_strchr("hello", 'h')) != 0)
		ft_putstr("ERROR: ft_strchr(hello, h)\n");
	if (ft_strcmp(strchr("hello", '\0'), ft_strchr("hello", '\0')) != 0)
		ft_putstr("ERROR: ft_strchr(hello, \0)\n");
	if (ft_strcmp(strchr("3\n2\t25", '2'), ft_strchr("3\n2\t25", '2')) != 0)
		ft_putstr("ERROR: ft_strchr(3\\n2\\t25, 2)\n");
	if (ft_strcmp(strchr("   \t\n\tg1", 'g'), ft_strchr("   \t\n\tg1", 'g')) != 0)
		ft_putstr("ERROR: ft_strchr(   \\t\\n\\tg1, g)\n");
	if (strchr("sadaa", 'w') != ft_strchr("sadaa", 'w'))
		ft_putstr("ERROR: ft_strchr(sadaa, w)\n");

	ft_putstr("OK: ft_strchr passed.\n");
	ft_putstr("---------\n");
}
