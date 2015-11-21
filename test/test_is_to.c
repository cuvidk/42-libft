/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 18:46:16 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 18:55:43 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void test_is_to(int (*f1)(int), int (*f2)(int), char* ft_name)
{
	int i;

	i = 0;
	while (i < 255)
	{
		if ((*f1)(i) != (*f2)(i))
		{
			ft_putstr("ERROR: ");
			ft_putstr(ft_name);
			ft_putstr(" at value ");
			ft_putnbr(i);
			ft_putendl(".");
			return ;
		}
		++i;
	}
	ft_putstr("OK: ");
	ft_putstr(ft_name);
	ft_putendl(" passed.");
	ft_putendl("---------");
}
