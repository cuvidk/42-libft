/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:20:05 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/05 20:33:04 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "to_upper.h"

void	test_striter(void)
{
	char a[20];

	ft_strcpy(a, "hello my name is");
	ft_striter(a, to_upper);
	if (ft_strcmp("HELLO MY NAME IS", a) != 0)
		ft_putendl("ERROR: ft_striter failed.");
	ft_striter(NULL, to_upper);
	ft_putendl("OK: ft_striter passed.");
	ft_putendl("---------");
}
