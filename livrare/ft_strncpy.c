/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:24:13 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 19:24:14 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;
	
	i = 0;
	while (n > 0 && src[i])
	{
		dst[i] = src[i];
		--n;
		++i;
	}
	while (n > 0)
	{
		dst[i] = '\0';
		++i;
		--n;
	}
	return (dst);
}
