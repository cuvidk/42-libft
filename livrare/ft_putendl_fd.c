/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:23:54 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 19:23:56 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s != NULL)
	{
		char *line = (char*)malloc(sizeof(char) * (ft_strlen(s) + 2));
		ft_strcpy(line, s);
		ft_strcat(line, "\n");
		write(fd, line, ft_strlen(line));
		free(line);
	}
}
