#include "libft.h"
#include "tester.h"

#include <ctype.h>

int	main(void)
{
	test_iswhitespace();
	test_strlen();
	test_strcmp();
	test_strncmp();
	test_strdup();
	test_strcpy();
	test_strcat();
	test_strlcat();
	test_strncpy();
	test_strncat();
	test_strchr();
	test_strrchr();
	test_strstr();
	test_atoi();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_memdel();
	test_memalloc();
	test_strnew();
	test_strdel();
	test_strclr();
	test_striter();
	test_striteri();
	test_strmap();
	test_strmapi();
	test_strequ();
	test_strnequ();
	test_strsub();
	test_strjoin();
	test_strtrim();
	test_strsplit();
	test_itoa();
	test_lstnew();
	test_lstdelone();
	test_lstdel();
	test_lstadd();
	test_lstiter();
	test_lstmap();
	test_is_to(ft_tolower, tolower, "tolower");
	test_is_to(ft_toupper, toupper, "toupper");
	test_is_to(ft_isprint, isprint, "isprint");
	test_is_to(ft_isascii, isascii, "isascii");
	test_is_to(ft_isalnum, isalnum, "isalnum");
	test_is_to(ft_isdigit, isdigit, "isdigit");
	test_is_to(ft_isalpha, isalpha, "isalpha");
	return (0);
}
