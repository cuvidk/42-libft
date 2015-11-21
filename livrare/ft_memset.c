/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 16:16:19 by ctiperci          #+#    #+#             */
/*   Updated: 2015/10/23 16:25:35 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void*	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char*) b;
	while (len)
	{
		string[len] = (unsigned char) c;
		--len;
	}
	string[len] = (unsigned char) c;
	
	return (b);
}
