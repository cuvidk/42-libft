/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 20:12:07 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/09 21:16:12 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_alloc_size(int n)
{
	int		count;
	long	number;

	count = 0;
	number = (int)n;
	if (number <= 0)
	{
		++count;
		number *= -1;
	}
	while (number)
	{
		++count;
		number /= 10;
	}
	return (count);
}

static void	rec_fill_number(char *nbr, long long_nbr, int index)
{
	if (long_nbr > 9)
		rec_fill_number(nbr, long_nbr / 10, index - 1);
	nbr[index] = long_nbr % 10 + '0';
}

char	*ft_itoa(int n)
{
	char	*nbr;
	long	long_nbr;

	long_nbr = (long)n;
	nbr = (char*)malloc(sizeof(char) * (get_alloc_size(n) + 1));
	if (nbr == NULL)
		return (NULL);
	if (long_nbr < 0)
	{
		nbr[0] = '-';
		long_nbr = -long_nbr;
	}
	rec_fill_number(nbr, long_nbr, get_alloc_size(n) - 1);
	return (nbr);
}
