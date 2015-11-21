#include "libft.h"

void	replace_first(t_list *elem)
{
	((char*)elem->content)[0] = 'A';
}

void	test_lstiter(void)
{
	t_list *list;

	list = NULL;
	ft_lstadd(&list, ft_lstnew("hello", 6));
	ft_lstadd(&list, ft_lstnew("abcde", 6));
	ft_lstadd(&list, ft_lstnew("zyxkl", 6));
	ft_lstiter(list, replace_first);
	while (list)
	{
		if (((char*)list->content)[0] != 'A')
			ft_putendl("ERROR: ft_lstiter failed.");
		list = list->next;
	}
	ft_putendl("OK: ft_lstiter passed.");
	ft_putendl("---------");
}
