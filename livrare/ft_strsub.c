/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 16:56:47 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 17:17:47 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = ft_strnew(sizeof(char) * (len + 1));
	if (sub == NULL || s == NULL)
		return (NULL);
	ft_strncpy(sub, s + start, len);
	return (sub);
}
