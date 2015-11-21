#include "libft.h"

static void	init_array(char *x, int length)
{
	--length;
	while (length >= 0)
	{
		x[length] = 0;
		--length;
	}
}

static int	is_okay(char *a, char *b)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (a[i] != b[i])
		{
			init_array(a, 20);
			init_array(b, 20);
			return (0);
		}
		++i;
	}
	init_array(a, 20);
	init_array(b, 20);
	return (1);
}

void		test_strncat(void)
{
	char a[20];
	char b[20];
	
	init_array(a, 20);
	init_array(b, 20);
	
	ft_strncat(a, "salut", 9);
	strncat(b, "salut", 9);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncat(salut)\n");

	ft_strncat(a, "salutlaptop", 5);
	strncat(b, "salutlaptop", 5);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncat(salutlaptop)\n");

	ft_strncat(a, "\t\nds", 5);
	strncat(b, "\t\nds", 5);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncat(\\t\\nds)\n");

	ft_strncat(a, "   ", 5);
	strncat(b, "   ", 5);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncat(   )\n");

	ft_strncat(a, "sa", 0);
	strncat(b, "sa", 0);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncat(0 case)\n");

	ft_putstr("OK: ft_strncat passed.\n");
	ft_putstr("---------\n");
}
