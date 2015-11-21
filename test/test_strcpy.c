#include "libft.h"

void	test_strcpy(void)
{
	char a[10];
	char b[10];

	if (ft_strcmp(ft_strcpy(a, "Hello w"), strcpy(b, "Hello w")) != 0)
		ft_putstr("ERROR: ft_strcpy(src, 'Hello world')\n");
	if (ft_strcmp(ft_strcpy(a, ""), strcpy(b, "")) != 0)
		ft_putstr("ERROR: ft_strcpy(src, '')\n");
	if (ft_strcmp(ft_strcpy(a, "\n\t\n"), strcpy(b, "\n\t\n")) != 0)
		ft_putstr("ERROR: ft_strcpy(src, '\\n\\t\\n')\n");
	if (ft_strcmp(ft_strcpy(a, "   "), strcpy(b, "   ")) != 0)
		ft_putstr("ERROR: ft_strcpy(src, '   ')\n");
	if (ft_strcmp(ft_strcpy(a, "..8151\t.\n"), strcpy(b, "..8151\t.\n")) != 0)
		ft_putstr("ERROR: ft_strcpy(src, '..8151\\t.\\n')\n");
	ft_putstr("OK: ft_strcpy passed.\n");
	ft_putstr("---------\n");
}
