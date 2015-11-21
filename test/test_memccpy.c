#include "libft.h"

void	test_memccpy(void)
{
	char a[30];
	char b[30];
	
	ft_strcpy(a, "Hello my name is don't matter");
	ft_strcpy(b, "Hello my name is don't matter");
	if (ft_strcmp((char *)ft_memccpy(a, "whatever", 'v', 8), 
		(char*)memccpy(b, "whatever", 'v', 8)) != 0)
		ft_putstr("ERROR: ft_memcpy(a, whatever, v, 8)\n");
	if (ft_strcmp(a, b) != 0)
		ft_putstr("ERROR: ft_memcpy(a, whatever, v, 8)\n");
	if (ft_strcmp((char *)ft_memccpy(a, "whatever", 'r', 8), 
		(char*)memccpy(b, "whatever", 'r', 8)) != 0)
		ft_putstr("ERROR: ft_memcpy(a, whatever, r, 8)\n");
	if (ft_strcmp(a, b) != 0)
		ft_putstr("ERROR: ft_memcpy(a, whatever, r, 8)\n");
	if (ft_memccpy(a, "ultra", 'x', 4) != memccpy(a, "ultra", 'x', 4))
		ft_putstr("ERROR: ft_memcpy(a, ultra, x, 4)\n");
	ft_putstr("OK: ft_memccpy passed.\n");
	ft_putstr("---------\n");
}
