#include "libft.h"

void	test_lstadd(void)
{
	t_list *list;

	list = NULL;
	ft_lstadd(&list, ft_lstnew("you", 4));
	ft_lstadd(&list, ft_lstnew("are", 4));
	ft_lstadd(&list, ft_lstnew("how", 4));
	if (ft_strcmp((char*)list->content, "how") != 0)
		ft_putendl("ERROR: ft_lstadd.");
	list = list->next;
	if (ft_strcmp((char*)list->content, "are") != 0)
		ft_putendl("ERROR: ft_lstadd.");
	list = list->next;
	if (ft_strcmp((char*)list->content, "you") != 0)
		ft_putendl("ERROR: ft_lstadd.");
	ft_putendl("OK: ft_lstadd passed.");
	ft_putendl("---------");
}
