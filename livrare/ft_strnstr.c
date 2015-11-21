/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:25:11 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 19:25:12 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t s1_size;
	size_t s2_size;

	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (s2_size == 0)
		return ((char *)s1);
	while (s1_size - i >= s2_size && n > 0)
	{
		if (s1[i] == s2[0])
			if (ft_strncmp(&s1[i], s2, s2_size) == 0)
				return ((char *) &s1[i]);
		++i;
		--n;
	}
	return (NULL);
}
