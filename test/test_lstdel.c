#include "libft.h"

void	test_lstdel(void)
{
	t_list *list;

	list = ft_lstnew("hello", 6);
	ft_lstdel(&list, ft_delete);
	if (list != NULL)
		ft_putendl("ERROR: ft_lstdel failed.");
	ft_putendl("OK: ft_lstdel passed.");
	ft_putendl("---------");
}
