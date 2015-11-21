/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 18:03:29 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 18:52:11 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strtrim(void)
{
	char	*result;

	result = ft_strtrim("  \n  hello  \n\t\n ");
	if (ft_strcmp(result, "hello") != 0)
		ft_putendl("ERROR: ft_strtrim(result, hello).");
	result = ft_strtrim("  \t   ");
	if (ft_strcmp(result, "") != 0)
		ft_putendl("ERROR: ft_strtrim(  \\t   ).");
	result = ft_strtrim("");
	if (ft_strcmp(result, "") != 0)
		ft_putendl("ERROR: ft_strtrim().");
	ft_putendl("OK: ft_strtrim passed.");
	ft_putendl("---------");
}
