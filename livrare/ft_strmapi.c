
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*str;

	i = 0;
	if (s && f)
	{
		str = ft_strnew(ft_strlen(s) + 1);
		if (str == NULL)
			return (NULL);
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			++i;
		}
		return (str);
	}
	return (NULL);
}
