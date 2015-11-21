/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:26:40 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 19:26:41 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t s1_size;
	size_t s2_size;

	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (s2_size == 0)
		return ((char *)s1);
	while (s1_size - i >= s2_size)
	{
		if (s1[i] == s2[0])
			if (ft_strncmp(&s1[i], s2, s2_size) == 0)
				return ((char *) &s1[i]);
		++i;
	}
	return (NULL);
}
