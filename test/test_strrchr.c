#include "libft.h"

void	test_strrchr(void)
{
	if (ft_strcmp(strrchr("hello", 'e'), ft_strrchr("hello", 'e')) != 0)
		ft_putstr("ERROR: ft_strrchr(hello, e)\n");
	if (ft_strcmp(strrchr("hello", 'o'), ft_strrchr("hello", 'o')) != 0)
		ft_putstr("ERROR: ft_strrchr(hello, o)\n");
	if (ft_strcmp(strrchr("hello", 'h'), ft_strrchr("hello", 'h')) != 0)
		ft_putstr("ERROR: ft_strrchr(hello, h)\n");
	if (ft_strcmp(strrchr("hello", '\0'), ft_strrchr("hello", '\0')) != 0)
		ft_putstr("ERROR: ft_strrchr(hello, \0)\n");
	if (ft_strcmp(strrchr("3\n2\t25", '2'), ft_strrchr("3\n2\t25", '2')) != 0)
		ft_putstr("ERROR: ft_strrchr(3\\n2\\t25, 2)\n");
	if (ft_strcmp(strrchr("   \t\n\tg1", 'g'), ft_strrchr("   \t\n\tg1", 'g')) != 0)
		ft_putstr("ERROR: ft_strrchr(   \\t\\n\\tg1, g)\n");
	if (strrchr("sadaa", 'w') != ft_strrchr("sadaa", 'w'))
		ft_putstr("ERROR: ft_strrchr(sadaa, w)\n");

	ft_putstr("OK: ft_strrchr passed.\n");
	ft_putstr("---------\n");
}
