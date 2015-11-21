#include "libft.h"

void	test_lstnew(void)
{
	t_list *list;
	char *content;

	content = "hello";
	list = ft_lstnew(content, ft_strlen(content) + 1);
	if (ft_strcmp((char *)list->content, content) != 0)
		ft_putendl("ERROR: ft_lstnew(hello, sizoeof(hello)).");
	if (list->content_size != ft_strlen(content) + 1)
		ft_putendl("ERROR: ft_lstnew(hello, sizoeof(hello)).");
	list = ft_lstnew(NULL, 3);
	if (list->content != NULL)
		ft_putendl("ERROR: ft_lstnew(NULL, 3).");
	if (list->content_size != 0)
		ft_putendl("ERROR: ft_lstnew(NULL, 3).");
	ft_putendl("OK: ft_lstnew passed.");
	ft_putendl("---------");	
}
