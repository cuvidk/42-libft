/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 19:54:24 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 20:03:45 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strsplit(void)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_strsplit("", '*');
	if (split[0] != 0)
		ft_putendl("ERROR: ft_strsplit(, *).");
	split = ft_strsplit("***\n\t\n  *hello* ", '*');
	if (ft_strcmp(split[0], "\n\t\n  ") != 0 ||
			ft_strcmp(split[1], "hello") != 0 ||
				ft_strcmp(split[2], " ") != 0)
		ft_putendl("ERROR: ft_strsplit(***\\n\\t\\n  *hello* , *).");
	split = ft_strsplit("   ", '*');
	if (ft_strcmp(split[0], "   ") != 0)
		ft_putendl("ERROR: ft_strsplit(   , *).");
	ft_putendl("OK: ft_strsplit passed.");
	ft_putendl("---------");
}
