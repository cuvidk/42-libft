#include "libft.h"

void	test_memcmp(void)
{
	if (memcmp("hello", "hello", 5) != ft_memcmp("hello", "hello", 5))
		ft_putstr("ERROR: ft_memcmp(hello, hello 5)\n");
	if (memcmp("hello", "hello", 7) != ft_memcmp("hello", "hello", 7))
		ft_putstr("ERROR: ft_memcmp(hello, hello 7)\n");
	if (memcmp("hello", "hellO", 5) != ft_memcmp("hello", "hellO", 5))
		ft_putstr("ERROR: ft_memcmp(hello, hellO 5)\n");
	if (memcmp("hellO", "hello", 5) != ft_memcmp("hellO", "hello", 5))
		ft_putstr("ERROR: ft_memcmp(hellO, hello 5)\n");
	if (memcmp("\t\n\t", "\t\n\t", 3) != ft_memcmp("\t\n\t", "\t\n\t", 3))
		ft_putstr("ERROR: ft_memcmp(\\t\\n\\t, \\t\\n\\t, 3)\n");
	if (memcmp("hel\tlo", "hel\n", 6) != ft_memcmp("hel\tlo", "hel\n", 6))
		ft_putstr("ERROR: ft_memcmp(hel\\tlo, hel\\n 5)\n");
	ft_putstr("OK: ft_memcmp passed.\n");
	ft_putstr("---------\n");

}
