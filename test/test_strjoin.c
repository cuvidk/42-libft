/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:31:17 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 17:44:07 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	test_strjoin(void)
{
	char	*result;

	result = ft_strjoin("hello", "world");
	if (ft_strcmp(result, "helloworld") != 0)
		ft_putendl("ERROR: ft_strjoin(hello, world).");
	result = ft_strjoin("", "");
	if (ft_strcmp(result, "") != 0)
		ft_putendl("ERROR: ft_strjoin(,).");
	result = ft_strjoin(NULL, "sa");
	if (result != NULL)
		ft_putendl("ERROR: ft_strjoin(NULL, sa).");
	result = ft_strjoin("\n\t", "hello\n\t");
	if (ft_strcmp(result, "\n\thello\n\t") != 0)
		ft_putendl("ERROR: ft_strjoin(\\n\\thello\\n\\t).");
	ft_putendl("OK: ft_strjoin passed.");
	ft_putendl("---------");
}
