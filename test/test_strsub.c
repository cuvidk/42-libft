/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:09:02 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 17:22:39 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strsub(void)
{
	char	*result;

	result = ft_strsub("hello", 1, 3);
	if (ft_strcmp(result, "ell") != 0)
		ft_putendl("ERROR: ft_strsub(hello, 1, 3)");
	result = ft_strsub("hello", 0, 5);
	if (ft_strcmp(result, "hello") != 0)
		ft_putendl("ERROR: ft_strsub(hello, 0, 5)");
	result = ft_strsub("hello", 0, 0);
	if (ft_strcmp(result, "") != 0)
		ft_putendl("ERROR: ft_strsub(hello, 0, 0)");
	ft_putendl("OK: ft_strsub passed.");
	ft_putendl("---------");
}
