#include "libft.h"

t_list	*function(t_list *elem)
{
	t_list *new;

	new = ft_lstnew(elem->content, elem->content_size);
	((char*)new->content)[0] = 'A';
	return (new);
}

void	test_lstmap(void)
{
	t_list *list;
	t_list *new;

	list = NULL;
	ft_lstadd(&list, ft_lstnew("hello", 6));
	ft_lstadd(&list, ft_lstnew("helLo", 6));
	ft_lstadd(&list, ft_lstnew("hellA", 6));
	ft_lstadd(&list, ft_lstnew("helvo", 6));
	new = ft_lstmap(list, function);
	while (new)
	{
		if (((char*)new->content)[0] != 'A')
			ft_putendl("ERROR: ft_lstmap failed.");
		new = new->next;
	}
	ft_putendl("OK: ft_lstmap passed.");
	ft_putendl("---------");
}
