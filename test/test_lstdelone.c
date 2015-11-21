#include "libft.h"

void	test_lstdelone(void)
{
	t_list *list;

	list = ft_lstnew("hello", 6);
	ft_lstdelone(&list, ft_delete);
	if (list != NULL)
		ft_putendl("ERROR:  ft_lstdelone failed.");
	ft_putendl("OK: ft_lstdelone passed.");
	ft_putendl("---------");
}
