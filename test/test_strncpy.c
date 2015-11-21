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

void		test_strncpy(void)
{
	char a[20];
	char b[20];
	
	init_array(a, 20);
	init_array(b, 20);
	
	ft_strncpy(a, "salut", 9);
	strncpy(b, "salut", 9);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncpy(salut)\n");

	ft_strncpy(a, "salutlaptop", 5);
	strncpy(b, "salutlaptop", 5);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncpy(salutlaptop)\n");

	ft_strncpy(a, "\t\nds", 5);
	strncpy(b, "\t\nds", 5);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncpy(\\t\\nds)\n");

	ft_strncpy(a, "   ", 5);
	strncpy(b, "   ", 5);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncpy(   )\n");

	ft_strncpy(a, "sa", 0);
	strncpy(b, "sa", 0);
	if (!is_okay(a, b))
		ft_putstr("ERROR: ft_strncpy(0 case)\n");

	ft_putstr("OK: ft_strncpy passed.\n");
	ft_putstr("---------\n");
}
