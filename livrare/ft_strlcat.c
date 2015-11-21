#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	while (*dst)
	{
		++dst;
		--size;
	}
	while (size > 1 && *src)
	{
		*dst = *src;
		++src;
		++dst;
		size--;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
