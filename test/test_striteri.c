/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 20:20:05 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/05 20:33:04 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "to_upper.h"

void	test_striteri(void)
{
	char a[20];

	ft_strcpy(a, "hello my name is");
	ft_striteri(a, to_upper2);
	if (ft_strcmp("HELLO MY NAME IS", a) != 0)
		ft_putendl("ERROR: ft_striteri failed.");
	ft_striteri(NULL, to_upper2);
	ft_putendl("OK: ft_striteri passed.");
	ft_putendl("---------");
}
