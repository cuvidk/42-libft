/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:41:33 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/05 15:41:34 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *newstr;

	newstr = (char*)malloc(sizeof(char) * size);
	if (newstr == NULL)
		return (NULL);
	ft_bzero(newstr, size);
	return (newstr);
}
